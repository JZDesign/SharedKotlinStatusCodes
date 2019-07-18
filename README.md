[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

# SharedKotlinStatusCodes
A shared resource for identifying HTTP status codes, erros, and successes.


## Carthage 

Cartfile :  `github "JZDesign/SharedKotlinStatusCodes" "0.11"`

## Updating iOS Framework

Run the `PackForXCode` script in the `build.gradle` file. Then manually compress the results found in the `build/xcode-frameworks` directory. Paste that into the projects `root` directory and push it to git.

## Building all other (non apple) libraries

Run `./gradlew publishToMavenLocal`

You may need to run `gradle wrapper` first

If you get this error:
>> Task :generateMetadataFileForIosPublication FAILED

You can comment out `enableFeaturePreview('GRADLE_METADATA')` in the `settings.gradle`
