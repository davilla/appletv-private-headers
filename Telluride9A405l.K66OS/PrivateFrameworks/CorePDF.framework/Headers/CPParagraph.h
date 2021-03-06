/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"

@class CPListItem;

@interface CPParagraph : CPRegion {
	BOOL noIndentation;	// 68 = 0x44
	BOOL below;	// 69 = 0x45
	unsigned alignment;	// 72 = 0x48
	BOOL hasDropCap;	// 76 = 0x4c
	id flowProperties;	// 80 = 0x50
	CPListItem *listItem;	// 84 = 0x54
	float preformatWidth;	// 88 = 0x58
}
@property(assign) unsigned alignment;	// G=0x31f39f95; S=0x31f39fa5; converted property
@property(assign) BOOL below;	// G=0x31f39f85; S=0x31f39f75; converted property
@property(retain) id flowProperties;	// G=0x31f39ecd; S=0x31f39edd; converted property
@property(assign) BOOL hasDropCap;	// G=0x31f39f55; S=0x31f39f65; converted property
@property(assign) BOOL isImageRegion;	// G=0x31f39f2d; S=0x31f3a4d9; converted property
@property(assign) BOOL isTextRegion;	// G=0x31f39f1d; S=0x31f3a561; converted property
@property(retain, nonatomic) CPListItem *listItem;	// G=0x31f39fb5; S=0x31f3a02d; @synthesize
@property(assign) BOOL noIndentation;	// G=0x31f39f45; S=0x31f39f35; converted property
- (id)init;	// 0x31f39fc5
- (void)accept:(id)accept;	// 0x31f3a625
// converted property getter: - (unsigned)alignment;	// 0x31f39f95
// converted property getter: - (BOOL)below;	// 0x31f39f85
- (id)copyWithZone:(NSZone *)zone;	// 0x31f3a63d
- (void)dealloc;	// 0x31f3a679
- (void)explode;	// 0x31f3a3a5
// converted property getter: - (id)flowProperties;	// 0x31f39ecd
// converted property getter: - (BOOL)hasDropCap;	// 0x31f39f55
- (unsigned)index;	// 0x31f3a5e9
- (BOOL)isBoxRegion;	// 0x31f39f21
- (BOOL)isGraphicalRegion;	// 0x31f39f25
// converted property getter: - (BOOL)isImageRegion;	// 0x31f39f2d
- (BOOL)isListItemRegion;	// 0x31f39f05
- (BOOL)isParagraphRegion;	// 0x31f39eed
- (BOOL)isPreformattedWithUnitWidth:(float *)unitWidth;	// 0x31f3a055
- (BOOL)isRowRegion;	// 0x31f39f29
- (BOOL)isShapeRegion;	// 0x31f39f31
// converted property getter: - (BOOL)isTextRegion;	// 0x31f39f1d
// declared property getter: - (id)listItem;	// 0x31f39fb5
// converted property getter: - (BOOL)noIndentation;	// 0x31f39f45
- (CGRect)reducedBounds;	// 0x31f3a33d
- (float)selectionBottom;	// 0x31f3a2d1
// converted property setter: - (void)setAlignment:(unsigned)alignment;	// 0x31f39fa5
// converted property setter: - (void)setBelow:(BOOL)below;	// 0x31f39f75
// converted property setter: - (void)setFlowProperties:(id)properties;	// 0x31f39edd
// converted property setter: - (void)setHasDropCap:(BOOL)cap;	// 0x31f39f65
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x31f3a4d9
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x31f3a561
// declared property setter: - (void)setListItem:(id)item;	// 0x31f3a02d
// converted property setter: - (void)setNoIndentation:(BOOL)indentation;	// 0x31f39f35
@end

