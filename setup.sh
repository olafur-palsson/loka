sudo apt-get update
sudo apt install cmake libopenblas-dev liblapack-dev -y 
cd arma9+
cmake .
make
sudo make install

