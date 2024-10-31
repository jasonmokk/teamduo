//
// File rosnodeinterface.cpp
//
// Code generated for Simulink model 'TeamDuo0x2810x29'.
//
// Model version                  : 1.4
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Wed Oct 30 21:09:07 2024
//

#ifdef _MSC_VER

#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)

#else

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"

#endif                                 //_MSC_VER

#include "TeamDuo0x2810x29.h"
#include "rosnodeinterface.h"
#include <thread>
#include <chrono>
#include <utility>
#undef ROS_SET_RTM_ERROR_STATUS
#undef ROS_GET_RTM_ERROR_STATUS
#undef ROS_RTM_STEP_TASK
#define ROS_SET_RTM_ERROR_STATUS(status) rtmSetErrorStatus(TeamDuo0x2810x29_M,(status));
#define ROS_GET_RTM_ERROR_STATUS()     rtmGetErrorStatus(TeamDuo0x2810x29_M)
#define ROS_RTM_STEP_TASK(id)          rtmStepTask({$ModelRTMVarName%},id)
#ifndef RT_MEMORY_ALLOCATION_ERROR_DEF
#define RT_MEMORY_ALLOCATION_ERROR_DEF

const char *RT_MEMORY_ALLOCATION_ERROR = "memory allocation error";

#endif

namespace ros
{
  namespace matlab
  {
    NodeInterface::NodeInterface()
      : mNode()
      , mBaseRateSem()
      , mBaseRateThread()
      , mSchedulerTimer()
      , mStopSem()
      , mRunModel(true)
    {
    }

    NodeInterface::~NodeInterface()
    {
      terminate();
    }

    void NodeInterface::initialize(int argc, char ** argv)
    {
      try {
        mNode = std::make_shared<ros::NodeHandle>();
        ROS_INFO("** Starting the model \"TeamDuo0x2810x29\" **\n");

        // initialize the model which will initialize the publishers and subscribers
        ROS_SET_RTM_ERROR_STATUS(NULL);
        TeamDuo0x2810x29_initialize();

        // create the threads for the rates in the Model
        mBaseRateThread = std::make_shared<std::thread>(&NodeInterface::
          baseRateTask, this);

        // create scheduler timer to run the scheduler callback
        mSchedulerTimer = std::make_shared<ros::WallTimer>
          (mNode->createWallTimer(ros::WallDuration(200000000*1e-9),
            boost::bind(&NodeInterface::schedulerCallback, this, _1)));
        mSchedulerTimer->start();
      } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
        throw ex;
      }
    }

    int NodeInterface::run()
    {
      ros::spin();
      mRunModel = false;
      return 0;
    }

    boolean_T NodeInterface::getStopRequestedFlag(void)
    {

#ifndef rtmGetStopRequested

      return (!(ROS_GET_RTM_ERROR_STATUS()
                == (NULL)));

#else

      return (!(ROS_GET_RTM_ERROR_STATUS()
                == (NULL)) || rtmGetStopRequested(TeamDuo0x2810x29_M));

#endif

    }

    void NodeInterface::terminate(void)
    {
      if (mBaseRateThread.get()) {
        mBaseRateSem.notify();
        mBaseRateThread->join();
        mRunModel = false;
        mBaseRateThread.reset();
        if (mSchedulerTimer.get()) {
          mSchedulerTimer->stop();
          mSchedulerTimer.reset();
        }

        TeamDuo0x2810x29_terminate();
        mNode.reset();
      }
    }

    //
    // Scheduler Task using ROS Wall clock timer to run base-rate
    //
    void NodeInterface::schedulerCallback(const ros::WallTimerEvent& ev)
    {
      if (mRunModel) {
        mBaseRateSem.notify();
      }
    }

    // Base-rate task
    void NodeInterface::baseRateTask(void)
    {
      mRunModel = (ROS_GET_RTM_ERROR_STATUS() ==
                   (NULL));
      while (mRunModel) {
        mBaseRateSem.wait();

#ifdef MW_DEBUG_LOG

        ROS_INFO("** Base rate task semaphore received\n");

#endif

        if (!mRunModel)
          break;
        TeamDuo0x2810x29_step(
                              );
        mRunModel = !NodeInterface::getStopRequestedFlag();
      }

      // Shutdown the ROS node
      ros::shutdown();
    }
  }                                    //namespace matlab
}                                      //namespace ros

#ifdef _MSC_VER

#pragma warning(pop)

#else

#pragma GCC diagnostic pop

#endif                                 //_MSC_VER
