/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, SFUZipArchive;

__attribute__((visibility("hidden")))
@interface CPBundleResourcePackage : NSObject {
@private
	SFUZipArchive *mZipArchive;	// 4 = 0x4
	NSMutableDictionary *mEntryMap;	// 8 = 0x8
}
- (id)initWithZipArchive:(id)zipArchive;	// 0x30d91d55
- (void)dealloc;	// 0x30eabbf5
- (id)entryWithName:(id)name;	// 0x30d91ddd
@end

