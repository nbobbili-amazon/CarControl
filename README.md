# CarControl
Car control sample AGL binding code

# Clone
git clone --recursive git@github.com:nbobbili-amazon/CarControl.git

# SDK
Download and install the Guppy SDK
https://download.automotivelinux.org/AGL/release/guppy/6.99.2/raspberrypi3/deploy/sdk/

# Build
cd CarControl
. /opt/agl-sdk/6.99.2-armv7vethf-neon-vfpv4/environment-setup-armv7vehf-neon-vfpv4-agl-linux-gnueabi
mkdir build
cd build
cmake ..
make autobuild
cd ..
./autobuild/agl/autobuild package
