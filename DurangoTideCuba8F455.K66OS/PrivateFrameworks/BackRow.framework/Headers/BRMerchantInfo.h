/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
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
@property(retain, nonatomic) NSDictionary *authResources;	// G=0x3302c961; S=0x3302d385; @synthesize
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x3302cd09; 
@property(readonly, retain, nonatomic) NSString *bootstrapResourceURL;	// G=0x3302cb01; @dynamic
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x3302cad9; @dynamic
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x3302c9c5; 
@property(assign) BOOL enabled;	// G=0x3302cebd; S=0x3302ce29; @dynamic
@property(retain, nonatomic) NSDictionary *extension;	// G=0x3302c951; S=0x3302d3ad; @synthesize
@property(retain) NSString *featureName;	// G=0x3302cf6d; S=0x3302cf35; @dynamic
@property(readonly, assign, nonatomic) BRImage *menuIcon;	// G=0x3302cd81; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x3302ce01; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x3302cdd9; 
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x3302c981; S=0x3302d335; @synthesize
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x3302c991; @dynamic
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x3302ca7d; @dynamic
@property(retain, nonatomic) NSDictionary *resources;	// G=0x3302c971; S=0x3302d35d; @synthesize
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x3302cd59; 
@property(readonly, assign, nonatomic) NSString *topShelfURL;	// G=0x3302cd31; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x3302ca45; @dynamic
+ (id)infoWithMerchantIdentifier:(id)merchantIdentifier;	// 0x3302d165
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x3302d199
- (id)initWithMerchantIdentifier:(id)merchantIdentifier;	// 0x3302d1cd
- (id)initWithVendorBag:(id)vendorBag;	// 0x3302d08d
- (BOOL)_initialEnabledState;	// 0x3302cc71
- (id)_merchantIDHash;	// 0x3302d2cd
- (void)_rehydrateDictionaries;	// 0x3302cb29
- (void)_rehydrateDictionary:(id)dictionary forProperty:(id)property;	// 0x3302cb95
// declared property getter: - (id)authResources;	// 0x3302c961
// declared property getter: - (id)authType;	// 0x3302cd09
// declared property getter: - (id)bootstrapResourceURL;	// 0x3302cb01
// declared property getter: - (id)bootstrapResourceVersion;	// 0x3302cad9
- (void)dealloc;	// 0x3302cfe9
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x3302c9c5
// declared property getter: - (BOOL)enabled;	// 0x3302cebd
// declared property getter: - (id)extension;	// 0x3302c951
// declared property getter: - (id)featureName;	// 0x3302cf6d
// declared property getter: - (id)menuIcon;	// 0x3302cd81
// declared property getter: - (id)menuTitle;	// 0x3302ce01
// declared property getter: - (id)merchantID;	// 0x3302cdd9
// declared property getter: - (id)metadata;	// 0x3302c981
// declared property getter: - (id)minimumRequiredVersion;	// 0x3302c991
// declared property getter: - (float)preferredOrder;	// 0x3302ca7d
// declared property getter: - (id)resources;	// 0x3302c971
// declared property getter: - (id)rootURL;	// 0x3302cd59
// declared property setter: - (void)setAuthResources:(id)resources;	// 0x3302d385
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3302ce29
// declared property setter: - (void)setExtension:(id)extension;	// 0x3302d3ad
// declared property setter: - (void)setFeatureName:(id)name;	// 0x3302cf35
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3302d335
// declared property setter: - (void)setResources:(id)resources;	// 0x3302d35d
// declared property getter: - (id)topShelfURL;	// 0x3302cd31
// declared property getter: - (BOOL)usesParentalControls;	// 0x3302ca45
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3302cfad
@end

