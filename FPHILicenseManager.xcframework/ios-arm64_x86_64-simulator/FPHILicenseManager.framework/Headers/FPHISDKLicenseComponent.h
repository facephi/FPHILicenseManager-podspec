#ifndef _FacephiSDKLicenseComponent_
#define _FacephiSDKLicenseComponent_

#import <Foundation/Foundation.h>
#import <FPHILicenseManager/FPHILicenseStatus.h>

@interface FPHISDKLicenseComponent : NSObject

- (FPHILicenseStatus) getStatus;
- (NSString * _Nonnull) getVendorLicense;
- (NSObject * _Nullable) getValue:(NSString * _Nonnull)key;

@end

#endif

