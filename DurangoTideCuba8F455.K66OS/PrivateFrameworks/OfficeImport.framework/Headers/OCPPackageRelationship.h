/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationship : NSObject {
@private
	NSString *mIdentifier;	// 4 = 0x4
	NSString *mType;	// 8 = 0x8
	int mTargetMode;	// 12 = 0xc
	NSURL *mTargetLocation;	// 16 = 0x10
}
- (id)initWithXmlElement:(xmlNode *)xmlElement baseLocation:(id)location;	// 0x32c4f6a5
- (void)dealloc;	// 0x32c67c89
- (id)identifier;	// 0x32c4fa4d
- (void)readFromElement:(xmlNode *)element baseLocation:(id)location;	// 0x32c4f77d
- (id)targetLocation;	// 0x32c513b9
- (int)targetMode;	// 0x32c82b21
- (id)type;	// 0x32c4fa5d
@end

