/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVSettingsSaver.h"

@class BRMerchantInfo;

__attribute__((visibility("hidden")))
@interface BRMerchant : XXUnknownSuperclass <ATVSettingsSaver> {
	BRMerchantInfo *_info;	// 4 = 0x4
}
@property(assign) BOOL enabled;	// G=0x361499; S=0x3614c1; 
@property(retain) BRMerchantInfo *info;	// G=0x361421; S=0x361431; @dynamic
+ (id)flagstaff;	// 0x1bfa6d
+ (id)itms;	// 0x1bf9e9
+ (id)merchantForControl:(id)control;	// 0x360fa1
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x360fb5
+ (id)merchantForObject:(id)object;	// 0x360cad
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x360cc1
+ (id)merchantWithClosestAffinityToURL:(id)url;	// 0x361015
+ (id)sedona;	// 0x1bfa29
- (id)initWithCoder:(id)coder;	// 0x361275
- (id)initWithIdentifier:(id)identifier;	// 0x3611e1
- (id)initWithVendorBag:(id)vendorBag;	// 0x361151
- (id)accountType;	// 0x361495
- (void)addPathsToSaveTo:(id)to;	// 0x361399
- (void)assignToControl:(id)control;	// 0x3615dd
- (BOOL)assignToObject:(id)object;	// 0x3614ed
- (Class)catalogAgent;	// 0x1bfaad
- (id)copyWithZone:(NSZone *)zone;	// 0x361271
- (void)dealloc;	// 0x36127d
- (void)decorateRequestProperties:(id)properties;	// 0x361615
- (id)description;	// 0x3612f9
// declared property getter: - (BOOL)enabled;	// 0x361499
- (void)encodeWithCoder:(id)coder;	// 0x361279
- (id)evaluatePlist:(id)plist;	// 0x361875
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x3616f9
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x36171d
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body timeout:(double)timeout;	// 0x361751
- (BOOL)hasAffinityToURL:(id)url;	// 0x36187d
- (id)identifier;	// 0x36146d
// declared property getter: - (id)info;	// 0x361421
- (id)localizedStringForKey:(id)key;	// 0x361869
- (id)merchantErrorForError:(id)error;	// 0x361871
- (id)playerDelegate;	// 0x361879
- (oneway void)release;	// 0x361265
- (id)retain;	// 0x361261
- (unsigned)retainCount;	// 0x361269
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3614c1
// declared property setter: - (void)setInfo:(id)info;	// 0x361431
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x36139d
@end

