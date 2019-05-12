[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

# SharedKotlinStatusCodes
A shared resource for identifying HTTP status codes, erros, and successes.


## Carthage 

Cartfile : `binary "https://raw.githubusercontent.com/JZDesign/SharedKotlinStatusCodes/master/SharedKotlinStatusCodes.json" ~> 0.1`

## Updating iOS Framework

Run the `PackForXCode` script in the `build.gradle` file. Then manually compress the results found in the `build/xcode-frameworks` directory. Paste that into the projects `root` directory and push it to git.

## Building all other (non apple) libraries


