DOWNLOADDIR=~
cd $DOWNLOADDIR

echo 
echo "==> Installing FLTK dependencies"
echo
sudo apt-get install libx11-dev

echo 
echo "==> Downloading FLTK to " $DOWNLOADDIR 
echo 
wget http://fltk.org/pub/fltk/1.3.3/fltk-1.3.3-source.tar.gz 

echo 
echo "==> Extracting FLTK"
echo 
tar -xvf fltk-1.3.3-source.tar.gz
cd fltk-1.3.3

echo 
echo "==> Configuring FLTK"
echo 
./configure

echo 
echo "==> Building FLTK"
echo 
make

echo 
echo "==> Installing FLTK"
echo 
sudo make install
