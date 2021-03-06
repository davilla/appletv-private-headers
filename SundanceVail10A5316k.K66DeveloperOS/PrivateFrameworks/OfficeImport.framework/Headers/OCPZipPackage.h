/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCPPackage.h"

@class NSMutableDictionary, SFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage : OCPPackage {
@private
	SFUZipArchive *mArchive;	// 20 = 0x14
	NSMutableDictionary *mParts;	// 24 = 0x18
}
- (id)initWithArchive:(id)archive;	// 0x310d6291
- (id)initWithData:(id)data;	// 0x3119b8fd
- (id)initWithPath:(id)path;	// 0x310d3f65
- (void)dealloc;	// 0x3110a6c9
- (id)partForLocation:(id)location;	// 0x310ddc4d
- (void)resetPartForLocation:(id)location;	// 0x3111088d
@end

