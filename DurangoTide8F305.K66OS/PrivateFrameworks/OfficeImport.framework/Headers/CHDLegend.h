/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, OADGraphicProperties, EDCollection;

__attribute__((visibility("hidden")))
@interface CHDLegend : NSObject {
@private
	int mLegendPosition;	// 4 = 0x4
	OADGraphicProperties *mGraphicProperties;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
	EDCollection *mLegendEntries;	// 16 = 0x10
	EDResources *mResources;	// 20 = 0x14
	bool mIsVertical;	// 24 = 0x18
}
@property(retain) id font;	// G=0x3453fac5; S=0x3456b1d5; converted property
@property(assign) unsigned fontIndex;	// G=0x345c39e9; S=0x3453f525; converted property
@property(retain) id graphicProperties;	// G=0x345c39c9; S=0x3453f589; converted property
@property(assign) bool isSingleColumnLegend;	// G=0x345c39d9; S=0x3453f601; converted property
@property(assign) int legendPosition;	// G=0x3453fab5; S=0x3453f5f1; converted property
- (id)initWithResources:(id)resources;	// 0x3453f3bd
- (void)dealloc;	// 0x345402ad
// converted property getter: - (id)font;	// 0x3453fac5
// converted property getter: - (unsigned)fontIndex;	// 0x345c39e9
// converted property getter: - (id)graphicProperties;	// 0x345c39c9
// converted property getter: - (bool)isSingleColumnLegend;	// 0x345c39d9
- (id)legendEntries;	// 0x3453f975
// converted property getter: - (int)legendPosition;	// 0x3453fab5
// converted property setter: - (void)setFont:(id)font;	// 0x3456b1d5
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x3453f525
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x3453f589
// converted property setter: - (void)setIsSingleColumnLegend:(bool)legend;	// 0x3453f601
// converted property setter: - (void)setLegendPosition:(int)position;	// 0x3453f5f1
@end

