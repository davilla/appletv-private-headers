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
@property(assign) unsigned alignment;	// G=0x30b9f25d; S=0x30b9f26d; converted property
@property(assign) BOOL below;	// G=0x30b9f24d; S=0x30b9f23d; converted property
@property(retain) id flowProperties;	// G=0x30b9f199; S=0x30b9f1a9; converted property
@property(assign) BOOL hasDropCap;	// G=0x30b9f21d; S=0x30b9f22d; converted property
@property(assign) BOOL isImageRegion;	// G=0x30b9f1f5; S=0x30b9f445; converted property
@property(assign) BOOL isTextRegion;	// G=0x30b9f1e5; S=0x30b9f4bd; converted property
@property(retain, nonatomic) CPListItem *listItem;	// G=0x30b9f27d; S=0x30b9f8dd; @synthesize
@property(assign) BOOL noIndentation;	// G=0x30b9f20d; S=0x30b9f1fd; converted property
- (id)init;	// 0x30b9f2c5
- (void)accept:(id)accept;	// 0x30b9f569
// converted property getter: - (unsigned)alignment;	// 0x30b9f25d
// converted property getter: - (BOOL)below;	// 0x30b9f24d
- (id)copyWithZone:(NSZone *)zone;	// 0x30b9f28d
- (void)dealloc;	// 0x30b9f585
- (void)explode;	// 0x30b9f325
// converted property getter: - (id)flowProperties;	// 0x30b9f199
// converted property getter: - (BOOL)hasDropCap;	// 0x30b9f21d
- (unsigned)index;	// 0x30b9f535
- (BOOL)isBoxRegion;	// 0x30b9f1e9
- (BOOL)isGraphicalRegion;	// 0x30b9f1ed
// converted property getter: - (BOOL)isImageRegion;	// 0x30b9f1f5
- (BOOL)isListItemRegion;	// 0x30b9f1d1
- (BOOL)isParagraphRegion;	// 0x30b9f1b9
- (BOOL)isPreformattedWithUnitWidth:(float *)unitWidth;	// 0x30b9f681
- (BOOL)isRowRegion;	// 0x30b9f1f1
- (BOOL)isShapeRegion;	// 0x30b9f1f9
// converted property getter: - (BOOL)isTextRegion;	// 0x30b9f1e5
// declared property getter: - (id)listItem;	// 0x30b9f27d
// converted property getter: - (BOOL)noIndentation;	// 0x30b9f20d
- (CGRect)reducedBounds;	// 0x30b9f5cd
- (float)selectionBottom;	// 0x30b9f631
// converted property setter: - (void)setAlignment:(unsigned)alignment;	// 0x30b9f26d
// converted property setter: - (void)setBelow:(BOOL)below;	// 0x30b9f23d
// converted property setter: - (void)setFlowProperties:(id)properties;	// 0x30b9f1a9
// converted property setter: - (void)setHasDropCap:(BOOL)cap;	// 0x30b9f22d
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x30b9f445
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x30b9f4bd
// declared property setter: - (void)setListItem:(id)item;	// 0x30b9f8dd
// converted property setter: - (void)setNoIndentation:(BOOL)indentation;	// 0x30b9f1fd
@end

