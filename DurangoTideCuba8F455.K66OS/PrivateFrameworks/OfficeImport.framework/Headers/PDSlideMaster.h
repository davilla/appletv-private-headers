/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTheme, NSMutableArray, OADColorMap, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface PDSlideMaster : PDSlideBase {
@private
	NSMutableArray *mSlideLayouts;	// 32 = 0x20
	OADTheme *mTheme;	// 36 = 0x24
	OADColorMap *mColorMap;	// 40 = 0x28
	OADTextListStyle *mTitleTextStyle;	// 44 = 0x2c
	OADTextListStyle *mBodyTextStyle;	// 48 = 0x30
	OADTextListStyle *mOtherTextStyle;	// 52 = 0x34
}
@property(retain) id bodyTextStyle;	// G=0x32ba2fe1; S=0x32bf3d3d; converted property
@property(retain) id theme;	// G=0x32b7fa9d; S=0x32d16cf5; converted property
@property(retain) id titleTextStyle;	// G=0x32ba6225; S=0x32bf3b89; converted property
- (id)init;	// 0x32bf2545
- (id)initWithDefaults;	// 0x32d16d2d
- (id)addSlideLayout;	// 0x32bf4675
- (void)addSlideLayout:(id)layout;	// 0x32bf4701
// converted property getter: - (id)bodyTextStyle;	// 0x32ba2fe1
- (id)colorMap;	// 0x32b96efd
- (id)colorScheme;	// 0x32b96f7d
- (void)dealloc;	// 0x32baad09
- (id)defaultTheme;	// 0x32b978d5
- (void)doneWithContent;	// 0x32d16c21
- (id)drawingTheme;	// 0x32d16bbd
- (id)fontScheme;	// 0x32c7336d
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32bf4651
- (id)otherTextStyle;	// 0x32bf3d85
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32bf464d
- (id)parentSlideBase;	// 0x32d16bb9
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32bf4649
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style;	// 0x32b91455
- (id)parentTextStyleForTables;	// 0x32c17885
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index;	// 0x32b913e1
// converted property setter: - (void)setBodyTextStyle:(id)style;	// 0x32bf3d3d
// converted property setter: - (void)setTheme:(id)theme;	// 0x32d16cf5
// converted property setter: - (void)setTitleTextStyle:(id)style;	// 0x32bf3b89
- (id)slideLayoutAtIndex:(unsigned)index;	// 0x32bf5e8d
- (unsigned)slideLayoutCount;	// 0x32bf5e6d
- (id)slideLayoutOfType:(int)type;	// 0x32bf6109
- (id)styleMatrix;	// 0x32c90021
// converted property getter: - (id)theme;	// 0x32b7fa9d
// converted property getter: - (id)titleTextStyle;	// 0x32ba6225
@end

