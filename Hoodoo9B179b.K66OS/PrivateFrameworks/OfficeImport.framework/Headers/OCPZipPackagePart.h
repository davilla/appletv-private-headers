/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCPPackagePart.h"

@class SFUZipEntry;

__attribute__((visibility("hidden")))
@interface OCPZipPackagePart : OCPPackagePart {
@private
	SFUZipEntry *mEntry;	// 20 = 0x14
}
- (id)initWithArchive:(id)archive location:(id)location package:(id)package;	// 0x328bae6d
- (void)copyToFile:(id)file;	// 0x329fd10d
- (id)data;	// 0x328c923d
- (void)dealloc;	// 0x328d46d1
- (xmlDoc *)xmlDocument;	// 0x328bb4e9
- (xmlTextReader *)xmlReader;	// 0x328c533d
@end

