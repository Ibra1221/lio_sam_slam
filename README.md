# LIO-SAM SLAM Mapping
## Repository to produce a 2D map of the husarion Mars Yard environment using LIO-SAM
This repository provides the packages gtsam, and lio_sam with tuned parameters in the lio_sam **params.yaml**. It is expected that the repository would be continually maintained during the tuning process to reach the expected parameters for the mars yard simulation
<hr style="border:2px solid gray">

### Installation & Setup
1. Create a directory for cloning  the repository
   ```bash
   mkdir lio_sam_slam
   ```  
2. Use this command to clone the repository including its submodules
  ```bash
   cd lio_sam_slam
   git clone --recurse-submodules https://github.com/Ibra1221/lio_sam_slam.git
  
   ```
3. Move everything to your home directory
   ```bash
   mv gtsam ~/gtsam
   mv lio_sam_ws ~/lio_sam_ws
   ```
4. build and source lio_sam_ws and run it using this command:
   ```bash
   ros2 launch lio_sam run.launch.py
   ```
