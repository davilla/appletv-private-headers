/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMerchant.h"


__attribute__((visibility("hidden")))
@interface ATVMerchant_ITMS : ATVMerchant {
	double _resourceInstallationTime;	// 28 = 0x1c
	BOOL _installingResources;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL installingResources;	// G=0x1cb989; S=0x1cb999; @synthesize=_installingResources
@property(assign, nonatomic) double resourceInstallationTime;	// G=0x1cb95d; S=0x1cb975; @synthesize=_resourceInstallationTime
- (void)_installBootstrapResources;	// 0x1cb769
- (id)accountType;	// 0x1cb0ad
- (void)decorateRequestProperties:(id)properties;	// 0x1cb0c9
- (BOOL)enabled;	// 0x1cb615
- (id)feedResourceNamed:(id)named;	// 0x1cb665
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x1cb19d
- (BOOL)hasAffinityToURL:(id)url;	// 0x1cb4a5
- (id)identifier;	// 0x1cb049
// declared property getter: - (BOOL)installingResources;	// 0x1cb989
// declared property getter: - (double)resourceInstallationTime;	// 0x1cb95d
// declared property setter: - (void)setInstallingResources:(BOOL)resources;	// 0x1cb999
// declared property setter: - (void)setResourceInstallationTime:(double)time;	// 0x1cb975
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x1cb619
@end
