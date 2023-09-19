# SWO-UE-2023

## EZ FH Setup

1. Pull docker image with ``docker pull dockerhub.fh-hagenberg.at/swo3/swo3``
2. Tag the docker image with ``docker tag dockerhub.fh-hagenberg.at/swo3/swo3 swo``
3. Run the image with ``docker run -it --rm -v ${pwd}:/home/swo3 swo``

## Hardcore setup

1. Open WSL (ideally Pengwin)
2. Make sure clang is installed ``sudo apt install clang``
3. Done.
