/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRApplianceCategoryListProvider : NSObject {
@private
	NSArray *_categories;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
}
@property(retain) NSArray *categories;	// G=0x35de1a3d; S=0x35de198d; converted property
@property(retain) id textAttributes;	// G=0x35de197d; S=0x35de193d; converted property
// converted property getter: - (id)categories;	// 0x35de1a3d
- (long)categoryIndexForIdentifier:(id)identifier;	// 0x35de1ac1
- (void)dealloc;	// 0x35de18dd
- (long)defaultCategoryIndex;	// 0x35de1a4d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35de1b49
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x35de1c05
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x35de1c31
- (long)numberOfSectionsInList:(id)list;	// 0x35de1c01
// converted property setter: - (void)setCategories:(id)categories;	// 0x35de198d
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x35de193d
// converted property getter: - (id)textAttributes;	// 0x35de197d
@end

