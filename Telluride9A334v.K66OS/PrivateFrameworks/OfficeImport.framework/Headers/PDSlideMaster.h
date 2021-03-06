/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class NSMutableArray, OADTheme, OADColorMap, OADTextListStyle;

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
@property(retain) id bodyTextStyle;	// G=0x355a3d91; S=0x355a2051; converted property
@property(retain) id otherTextStyle;	// G=0x35630145; S=0x355a20a1; converted property
@property(retain, nonatomic) NSMutableArray *slideLayouts;	// G=0x356fb449; S=0x356fb459; @synthesize=mSlideLayouts
@property(retain) id theme;	// G=0x354e65cd; S=0x356fb5d9; converted property
@property(retain) id titleTextStyle;	// G=0x355a3d75; S=0x355a1e25; converted property
- (id)init;	// 0x355a041d
- (id)initWithDefaultsAndTheme:(id)defaultsAndTheme;	// 0x356fb61d
- (id)addSlideLayout;	// 0x355a403d
- (void)addSlideLayout:(id)layout;	// 0x355a40d9
// converted property getter: - (id)bodyTextStyle;	// 0x355a3d91
- (id)colorMap;	// 0x3556b3a5
- (id)colorScheme;	// 0x3556b42d
- (void)dealloc;	// 0x3557033d
- (id)defaultTheme;	// 0x3562ab39
- (void)doneWithContent;	// 0x356fb4f9
- (id)drawingTheme;	// 0x356fb481
- (id)fontScheme;	// 0x3568e305
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x355a3d8d
// converted property getter: - (id)otherTextStyle;	// 0x35630145
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x355a3d89
- (id)parentSlideBase;	// 0x356fb445
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x355a3d85
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x35565dc9
- (id)parentTextStyleForTables;	// 0x356bb6d9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x35565d51
// converted property setter: - (void)setBodyTextStyle:(id)style;	// 0x355a2051
// converted property setter: - (void)setOtherTextStyle:(id)style;	// 0x355a20a1
// declared property setter: - (void)setSlideLayouts:(id)layouts;	// 0x356fb459
// converted property setter: - (void)setTheme:(id)theme;	// 0x356fb5d9
// converted property setter: - (void)setTitleTextStyle:(id)style;	// 0x355a1e25
- (id)slideLayoutAtIndex:(unsigned)index;	// 0x355a575d
- (unsigned)slideLayoutCount;	// 0x355a573d
- (id)slideLayoutOfType:(int)type;	// 0x355a5a25
// declared property getter: - (id)slideLayouts;	// 0x356fb449
- (id)styleMatrix;	// 0x356afd95
// converted property getter: - (id)theme;	// 0x354e65cd
// converted property getter: - (id)titleTextStyle;	// 0x355a3d75
@end

