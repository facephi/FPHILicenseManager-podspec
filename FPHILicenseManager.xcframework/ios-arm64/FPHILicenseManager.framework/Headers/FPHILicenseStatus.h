#ifndef _LicenseStatus_
#define _LicenseStatus_

typedef NS_OPTIONS(NSInteger, FPHILicenseStatus) {
    LicenseStatusOk=0,
    LicenseStatusParseError=1,
    LicenseStatusPackageMismatch=2,
    LicenseStatusExpired=3,
    LicenseStatusInvalidPlatform=4,
    LicenseStatusCorrupted=5,
    LicenseStatusInvalidProduct=6,
    LicenseStatusVersionError=7,
    LicenseStatusUnknownComponent = 8,
    LicenseStatusSignatureMismatch = 9
};

#endif

