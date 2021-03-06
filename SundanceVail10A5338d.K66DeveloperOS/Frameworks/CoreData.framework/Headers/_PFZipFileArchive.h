/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSDictionary, NSData, NSString, NSArray, NSMutableDictionary;

@interface _PFZipFileArchive : NSObject {
	NSDictionary *_contents;	// 4 = 0x4
	NSData *_data;	// 8 = 0x8
	id _provider;	// 12 = 0xc
	int _desc;	// 16 = 0x10
	NSString *_path;	// 20 = 0x14
	NSArray *_names;	// 24 = 0x18
	NSDictionary *_properties;	// 28 = 0x1c
	NSMutableDictionary *_cachedContents;	// 32 = 0x20
	void *_reserved;	// 36 = 0x24
	zFlags _zFlags;	// 40 = 0x28
	void *_reserved2[5];	// 44 = 0x2c
}
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x366ae481
- (id)initWithEntryNames:(id)entryNames contents:(id)contents properties:(id)properties options:(unsigned)options;	// 0x366ae945
- (id)initWithEntryNames:(id)entryNames dataProvider:(id)provider options:(unsigned)options;	// 0x366aea89
- (id)initWithPath:(id)path options:(unsigned)options error:(id *)error;	// 0x366ae259
- (id)archiveData;	// 0x366af375
- (id)archiveStream;	// 0x366af92d
- (id)contentsForEntryName:(id)entryName;	// 0x366aec69
- (void)dealloc;	// 0x366aebd9
- (id)entryNames;	// 0x366aec59
- (void)finalize;	// 0x366aec19
- (void)invalidate;	// 0x366af9a9
- (BOOL)isValid;	// 0x366afae5
- (id)propertiesForEntryName:(id)entryName;	// 0x366af2c5
- (id)streamForEntryName:(id)entryName;	// 0x366af0a5
- (BOOL)writeContentsForEntryName:(id)entryName toFile:(id)file options:(unsigned)options error:(id *)error;	// 0x366af289
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x366af969
@end

