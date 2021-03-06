/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject {
@private
	id _source;	// 4 = 0x4
	id _snapshot1;	// 8 = 0x8
	id _snapshot2;	// 12 = 0xc
	id _snapshot3;	// 16 = 0x10
	unsigned _newVersion;	// 20 = 0x14
	unsigned _oldVersion;	// 24 = 0x18
}
@property(readonly, retain) NSDictionary *cachedSnapshot;	// G=0x33fcfea9; @synthesize=_snapshot2
@property(readonly, assign) unsigned newVersionNumber;	// G=0x33fce315; @synthesize=_newVersion
@property(readonly, retain) NSDictionary *objectSnapshot;	// G=0x33fcfe91; @synthesize=_snapshot1
@property(readonly, assign) unsigned oldVersionNumber;	// G=0x33fce305; @synthesize=_oldVersion
@property(readonly, retain) NSDictionary *persistedSnapshot;	// G=0x33fcfec1; @synthesize=_snapshot3
@property(readonly, retain) NSManagedObject *sourceObject;	// G=0x33fcfe79; @synthesize=_source
- (id)initWithSource:(id)source newVersion:(unsigned)version oldVersion:(unsigned)version3 cachedSnapshot:(id)snapshot persistedSnapshot:(id)snapshot5;	// 0x33fcfd61
- (id)ancestorSnapshot;	// 0x33fce301
// declared property getter: - (id)cachedSnapshot;	// 0x33fcfea9
- (void)dealloc;	// 0x33fd0301
- (id)description;	// 0x33fd0389
// declared property getter: - (unsigned)newVersionNumber;	// 0x33fce315
- (id)objectForKey:(id)key;	// 0x33fd00f9
// declared property getter: - (id)objectSnapshot;	// 0x33fcfe91
// declared property getter: - (unsigned)oldVersionNumber;	// 0x33fce305
// declared property getter: - (id)persistedSnapshot;	// 0x33fcfec1
// declared property getter: - (id)sourceObject;	// 0x33fcfe79
- (id)valueForKey:(id)key;	// 0x33fcfed9
@end

