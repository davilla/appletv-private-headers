/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources;

@interface CHDLegendEntry : NSObject {
	unsigned mFontIndex;	// 4 = 0x4
	unsigned mEntryIndex;	// 8 = 0x8
	EDResources *mResources;	// 12 = 0xc
}
@property(assign) unsigned entryIndex;	// G=0x31d77385; S=0x31d2bb21; converted property
@property(retain) id font;	// G=0x31d772f5; S=0x31d7733d; converted property
@property(assign) unsigned fontIndex;	// G=0x31d77395; S=0x31d30ac9; converted property
- (id)initWithResources:(id)resources;	// 0x31d2baad
- (void)dealloc;	// 0x31d2c4b9
// converted property getter: - (unsigned)entryIndex;	// 0x31d77385
// converted property getter: - (id)font;	// 0x31d772f5
// converted property getter: - (unsigned)fontIndex;	// 0x31d77395
// converted property setter: - (void)setEntryIndex:(unsigned)index;	// 0x31d2bb21
// converted property setter: - (void)setFont:(id)font;	// 0x31d7733d
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x31d30ac9
@end
