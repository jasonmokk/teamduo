#!/bin/bash

echo "=========================="
echo "Starting App teamduo for {APP_NAME_PRETTY}"


systemctl start teamduo
systemctl start rosnodeChecker
