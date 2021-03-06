/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface FirmwareBundle : NSObject {
	NSData *hash;	// 4 = 0x4
	NSData *firmwareImage;	// 8 = 0x8
	NSData *signature;	// 12 = 0xc
	NSData *certificate;	// 16 = 0x10
	unsigned productIDCode;	// 20 = 0x14
	unsigned firmwareImageBaseAddress;	// 24 = 0x18
	unsigned firmwareImageSize;	// 28 = 0x1c
}
@property(readonly, assign) NSData *certificate;	// G=0x30dd7339; @synthesize
@property(readonly, assign) NSData *firmwareImage;	// G=0x30dd7311; @synthesize
@property(readonly, assign) unsigned firmwareImageBaseAddress;	// G=0x30dd7375; @synthesize
@property(readonly, assign) unsigned firmwareImageSize;	// G=0x30dd7389; @synthesize
@property(readonly, assign) NSData *hash;	// G=0x30dd7325; @synthesize
@property(readonly, assign) unsigned productIDCode;	// G=0x30dd7361; @synthesize
@property(readonly, assign) NSData *signature;	// G=0x30dd734d; @synthesize
+ (id)parseResourceFileIntoData:(id)data;	// 0x30dd6ed9
- (id)initWithBundle:(id)bundle;	// 0x30dd6aa9
- (id)initWithBundleName:(id)bundleName;	// 0x30dd6e35
- (id)initWithBundlePath:(id)bundlePath;	// 0x30dd6dd1
// declared property getter: - (id)certificate;	// 0x30dd7339
- (void)dealloc;	// 0x30dd7285
// declared property getter: - (id)firmwareImage;	// 0x30dd7311
// declared property getter: - (unsigned)firmwareImageBaseAddress;	// 0x30dd7375
// declared property getter: - (unsigned)firmwareImageSize;	// 0x30dd7389
// declared property getter: - (id)hash;	// 0x30dd7325
- (id)parseFirmwareImageFileIntoData:(id)data;	// 0x30dd7039
// declared property getter: - (unsigned)productIDCode;	// 0x30dd7361
// declared property getter: - (id)signature;	// 0x30dd734d
@end

