#ifndef _FacephiLicenseManager_
#define _FacephiLicenseManager_

#import <Foundation/Foundation.h>
#import <FPHIlicenseManager/FPHILicenseStatus.h>

@interface FPHILicenseManager : NSObject

- (id _Nonnull) init:(NSString * _Nonnull)license :(NSString * _Nonnull)product;
- (NSObject * _Nullable) getValue:(NSString * _Nonnull)key;
- (NSString * _Nonnull) getVendorLicense;
- (FPHILicenseStatus) getStatus;
+ (NSString * _Nonnull) getVersion;
+ (BOOL) isBoolNumber:(NSNumber * _Nonnull)num;

@end

#endif

