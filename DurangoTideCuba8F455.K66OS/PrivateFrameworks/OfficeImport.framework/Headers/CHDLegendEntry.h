/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegendEntry : NSObject {
@private
	unsigned mFontIndex;	// 4 = 0x4
	unsigned mEntryIndex;	// 8 = 0x8
	EDResources *mResources;	// 12 = 0xc
}
@property(assign) unsigned entryIndex;	// G=0x32d0d9f9; S=0x32cac189; converted property
@property(retain) id font;	// G=0x32d0da59; S=0x32d0da19; converted property
@property(assign) unsigned fontIndex;	// G=0x32d0da09; S=0x32cac179; converted property
- (id)initWithResources:(id)resources;	// 0x32cac10d
- (void)dealloc;	// 0x32cac309
// converted property getter: - (unsigned)entryIndex;	// 0x32d0d9f9
// converted property getter: - (id)font;	// 0x32d0da59
// converted property getter: - (unsigned)fontIndex;	// 0x32d0da09
// converted property setter: - (void)setEntryIndex:(unsigned)index;	// 0x32cac189
// converted property setter: - (void)setFont:(id)font;	// 0x32d0da19
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x32cac179
@end

