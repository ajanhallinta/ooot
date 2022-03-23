[![Windows Build](https://github.com/blawar/ooot/actions/workflows/msbuild.yml/badge.svg)](https://github.com/blawar/ooot/actions/workflows/msbuild.yml)

# Open Ocarina - The Master Port


```diff
- WARNING! -

Currently assets are statically linked, however this is just until we get the game sorted.  Once its stable,
we will switch to an external asset loader.  Stability, 60 FPS, and external asset loading are the top priorities.

Though most of the work for 64-bit is done, 32-bit is being buttoned up first.
```

**Note: This repository does not include any of the assets necessary to build the ROM. A prior copy of the game is required to extract the needed assets.**

**Note: Be sure to use ``git clone --recursive https://github.com/blawar/ooot.git`` when cloning the repo for the submodules.**

**Discord:** <https://discord.com/invite/8tktBEhbZm>

## Contributers
The current main contributers of this project are [blawar](https://github.com/blawar) and [DaMarkov](https://github.com/damarkov)

## Required Programs For Compiling Windows

[Python 3.10](https://www.python.org/downloads/) **Add to path during the install**

[Git](https://git-scm.com/) **Choose x64 Build and Use the git bash to clone the repo and to run setup.py**

[Visual Studio Community 2022](https://visualstudio.microsoft.com/vs/community/) **During setup click C++ development**

## Installation

### Windows

**Visual Studio 2019+ is the only currently supported build environment, and only the 32-bit X86/WIN32 build**

You must use the ZAPD that is included with this repository, and not the main branch as it is modified.

### PAL 1.0 RETAIL ROM
If you are using the EUR PAL 1.0 retail rom,

**make Sure baserom_original.z64 or baserom_original.n64 is present in C:\Users\Username\ooot\roms\PAL_1.0\ If it's not the correct "hash_md5": ["c02c1d79679f7ceb9a3bde55fff8aa13"] it won't extract the assets and continue.**

Open Git Bash Type ``git clone --recursive https://github.com/blawar/ooot.git`` let it run.
After it's done type cd ooot and if you have the rom placed in the location above 
Run this command next to extract the assets from the rom (baserom_original.z64 must exist in the directory)

```
setup.py -b PAL_1.0
```

### EUR Masterquest Debug ROM
If you are using the EUR Master Quest Debug rom.

**make Sure baserom_original.z64 or baserom_original.n64 is present in C:\Users\Username\ooot\roms\EUR_MQD\ If it's not the correct "hash_md5": ["f0b7f35375f9cc8ca1b2d59d78e35405", "8ca71e87de4ce5e9f6ec916202a623e9", "f751d1a097764e2337b1ac9ba1e27699"], it won't extract the assets and continue.**

Open Git Bash Type ``git clone --recursive https://github.com/blawar/ooot.git`` let it run.
After it's done type cd ooot and if you have the rom placed in the location above 
Run this command next to extract the assets from the rom (baserom_original.z64 must exist in the directory)
```
setup.py -b EUR_MQD
```

Open OOT.sln, you will find this in C:\Users\username\ooot\vs make sure **Debug - Win32** or **Release - Win32** is selected, then hit build.

Once the build completes, press F5 to start it if you are testing code but if you are compiling to play right click oot on the side and click build.

### macOS

Not currently supported, however a makefile and porting of GLideN64 would allow this and a PR is welcome.

### Linux (Native or under WSL / VM)

Not currently supported, however a makefile and porting of GLideN64 would allow this and a PR is welcome.



## Contributing

All contributions are welcome. This is a group effort, and even small contributions can make a difference.
Some tasks also don't require much knowledge to get started.  The best contribution that can be made, is playing the game and reporting bugs by opening a github issue on this repository.  Code contributions, as well as porting changes from the [upstream repo](https://github.com/zeldaret/oot) are greatly appreciated.

Most discussions happen on our [Discord Server](https://discord.com/invite/8tktBEhbZm), where you are welcome to ask if you need help getting started, or if you have any questions regarding this project and other decompilation projects.

## License

This software is licensed under the terms of the GPLv2, with exemptions noted below:

[Nintendo](https://github.com/Nintendo) is exempt from GPLv2 licensing and may (at its option) instead license any source code authored for this project under the MIT license.

[Ship of Harkinian](https://github.com/HarbourMasters/Shipwright) is exempt from GPLv2 for the ZAPD XML files and may instead license those files under the MIT license as long as they properly credit the contributors of those files in their primary readme.

Only commits *after* Dec 27, 2021 [a862411](https://github.com/blawar/ooot/commit/a862411f00c536770850f2c4e9e9b2edfea8947b) are covered under this GPL v2 license, as the original [upstream repo](https://github.com/zeldaret/oot/) unfortunately did not have a license and can not be relicensed retroactively.
