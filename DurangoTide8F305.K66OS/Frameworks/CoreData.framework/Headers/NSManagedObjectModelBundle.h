/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSBundle;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : NSObject {
@private
	NSBundle *_bundle;	// 4 = 0x4
	NSDictionary *_versionInfoDictionary;	// 8 = 0x8
}
@property(readonly, retain) NSBundle *bundle;	// G=0x342d4539; converted property
@property(readonly, retain) NSDictionary *versionInfoDictionary;	// G=0x342d44dd; converted property
- (id)initWithPath:(id)path;	// 0x342d4299
- (id)_modelForVersionHashes:(id)versionHashes;	// 0x3431eda9
// converted property getter: - (id)bundle;	// 0x342d4539
- (id)currentVersion;	// 0x342d44b1
- (id)currentVersionURL;	// 0x342d4485
- (void)dealloc;	// 0x342d4899
- (id)modelVersions;	// 0x3431ed59
- (id)urlForModelVersionWithName:(id)name;	// 0x342d44ed
- (id)versionHashInfo;	// 0x3431ed7d
// converted property getter: - (id)versionInfoDictionary;	// 0x342d44dd
@end

