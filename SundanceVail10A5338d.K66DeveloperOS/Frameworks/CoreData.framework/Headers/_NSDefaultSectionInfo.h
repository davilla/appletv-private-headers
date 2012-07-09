/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSFetchedResultsSectionInfo.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSFetchedResultsController;

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {
	NSFetchedResultsController *_controller;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSString *_indexTitle;	// 12 = 0xc
	unsigned _sectionOffset;	// 16 = 0x10
	unsigned _numberOfObjects;	// 20 = 0x14
	unsigned _oldSectionNumber;	// 24 = 0x18
	id _sectionObjects;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *indexTitle;	// G=0x36655a75; @synthesize=_indexTitle
@property(readonly, assign, nonatomic) NSString *name;	// G=0x36655a65; @synthesize=_name
@property(readonly, assign, nonatomic) unsigned numberOfObjects;	// G=0x36655a95; @synthesize=_numberOfObjects
@property(readonly, assign, nonatomic) NSArray *objects;	// G=0x36655905; 
@property(assign, nonatomic) unsigned oldSectionNumber;	// G=0x36655aa5; S=0x36655ab5; @synthesize=_oldSectionNumber
@property(readonly, assign, nonatomic) unsigned sectionNumber;	// G=0x36655861; 
@property(readonly, assign, nonatomic) unsigned sectionOffset;	// G=0x36655a85; @synthesize=_sectionOffset
- (id)initWithCoder:(id)coder;	// 0x36655701
- (id)initWithController:(id)controller name:(id)name indexTitle:(id)title sectionOffset:(unsigned)offset;	// 0x366554fd
- (void)clearSectionObjectsCache;	// 0x366558d9
- (void)dealloc;	// 0x366555b9
- (void)encodeWithCoder:(id)coder;	// 0x36655631
- (unsigned)indexOfObject:(id)object;	// 0x366559d1
// declared property getter: - (id)indexTitle;	// 0x36655a75
// declared property getter: - (id)name;	// 0x36655a65
// declared property getter: - (unsigned)numberOfObjects;	// 0x36655a95
// declared property getter: - (id)objects;	// 0x36655905
// declared property getter: - (unsigned)oldSectionNumber;	// 0x36655aa5
// declared property getter: - (unsigned)sectionNumber;	// 0x36655861
// declared property getter: - (unsigned)sectionOffset;	// 0x36655a85
- (void)setController:(id)controller;	// 0x366558c9
- (void)setNumberOfObjects:(unsigned)objects;	// 0x36655821
// declared property setter: - (void)setOldSectionNumber:(unsigned)number;	// 0x36655ab5
- (void)setSectionOffset:(unsigned)offset;	// 0x36655841
@end
