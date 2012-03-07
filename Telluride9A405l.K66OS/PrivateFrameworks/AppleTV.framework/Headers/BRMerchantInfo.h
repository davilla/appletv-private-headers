/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, BRImage;

@interface BRMerchantInfo : NSObject {
@private
	NSDictionary *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *_featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *resources;	// 20 = 0x14
	NSDictionary *authResources;	// 24 = 0x18
	NSDictionary *extension;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSDictionary *appDictionary;	// G=0x35ea95ed; @dynamic
@property(retain, nonatomic) NSDictionary *authResources;	// G=0x35ea9885; S=0x35ea9895; @synthesize
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x35ea93a1; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceURL;	// G=0x35ea93c9; @dynamic
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x35ea93f1; @dynamic
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x35ea94f1; 
@property(assign) BOOL enabled;	// G=0x35ea90cd; S=0x35ea913d; @dynamic
@property(readonly, assign, nonatomic) BOOL enabledInBag;	// G=0x35ea91c1; @dynamic
@property(retain, nonatomic) NSDictionary *extension;	// G=0x35ea98b9; S=0x35ea98c9; @synthesize
@property(retain) NSString *featureName;	// G=0x35ea9035; S=0x35ea908d; @dynamic
@property(readonly, assign, nonatomic) NSString *javascriptURL;	// G=0x35ea9419; 
@property(readonly, assign, nonatomic) BRImage *menuIcon;	// G=0x35ea92e9; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x35ea9299; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x35ea92c1; 
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x35ea981d; S=0x35ea982d; @synthesize
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x35ea9585; @dynamic
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x35ea9441; @dynamic
@property(retain, nonatomic) NSDictionary *resources;	// G=0x35ea9851; S=0x35ea9861; @synthesize
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x35ea9351; 
@property(readonly, assign, nonatomic) NSString *supportURL;	// G=0x35ea95c5; @dynamic
@property(readonly, assign, nonatomic) NSString *topShelfURL;	// G=0x35ea9379; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x35ea94b1; @dynamic
+ (id)infoWithMerchantIdentifier:(id)merchantIdentifier;	// 0x35ea8d15
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x35ea8cd9
- (id)initWithMerchantIdentifier:(id)merchantIdentifier;	// 0x35ea8e35
- (id)initWithVendorBag:(id)vendorBag;	// 0x35ea8d51
- (id)_featureCode;	// 0x35ea9781
- (void)_rehydrateDictionaries;	// 0x35ea9705
- (void)_rehydrateDictionary:(id)dictionary forProperty:(id)property;	// 0x35ea9615
// declared property getter: - (id)appDictionary;	// 0x35ea95ed
// declared property getter: - (id)authResources;	// 0x35ea9885
// declared property getter: - (id)authType;	// 0x35ea93a1
// declared property getter: - (id)bootstrapResourceURL;	// 0x35ea93c9
// declared property getter: - (id)bootstrapResourceVersion;	// 0x35ea93f1
- (void)dealloc;	// 0x35ea8f3d
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x35ea94f1
// declared property getter: - (BOOL)enabled;	// 0x35ea90cd
// declared property getter: - (BOOL)enabledInBag;	// 0x35ea91c1
// declared property getter: - (id)extension;	// 0x35ea98b9
// declared property getter: - (id)featureName;	// 0x35ea9035
// declared property getter: - (id)javascriptURL;	// 0x35ea9419
// declared property getter: - (id)menuIcon;	// 0x35ea92e9
// declared property getter: - (id)menuTitle;	// 0x35ea9299
// declared property getter: - (id)merchantID;	// 0x35ea92c1
// declared property getter: - (id)metadata;	// 0x35ea981d
// declared property getter: - (id)minimumRequiredVersion;	// 0x35ea9585
// declared property getter: - (float)preferredOrder;	// 0x35ea9441
// declared property getter: - (id)resources;	// 0x35ea9851
// declared property getter: - (id)rootURL;	// 0x35ea9351
// declared property setter: - (void)setAuthResources:(id)resources;	// 0x35ea9895
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35ea913d
// declared property setter: - (void)setExtension:(id)extension;	// 0x35ea98c9
// declared property setter: - (void)setFeatureName:(id)name;	// 0x35ea908d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x35ea982d
// declared property setter: - (void)setResources:(id)resources;	// 0x35ea9861
// declared property getter: - (id)supportURL;	// 0x35ea95c5
// declared property getter: - (id)topShelfURL;	// 0x35ea9379
- (void)useDefaultEnablement;	// 0x35ea9269
// declared property getter: - (BOOL)usesParentalControls;	// 0x35ea94b1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x35ea8fed
@end
