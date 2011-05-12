/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedNode.h"

@class NSMutableArray, SFUPointerKeyDictionary, EDWorkbook, EDProcessors, ESDContainer, EDPageSetup, EDWarnings, EDHeaderFooter, EDString, EDColorReference;

__attribute__((visibility("hidden")))
@interface EDSheet : OCDDelayedNode {
@private
	EDWorkbook *mWorkbook;	// 12 = 0xc
	EDString *mName;	// 16 = 0x10
	bool mHidden;	// 20 = 0x14
	bool mDisplayFormulas;	// 21 = 0x15
	bool mDisplayGridlines;	// 22 = 0x16
	bool mIsDialogSheet;	// 23 = 0x17
	EDColorReference *mDefaultGridlineColorReference;	// 24 = 0x18
	EDHeaderFooter *mHeaderFooter;	// 28 = 0x1c
	EDPageSetup *mPageSetup;	// 32 = 0x20
	NSMutableArray *mDrawables;	// 36 = 0x24
	SFUPointerKeyDictionary *mTextBoxMap;	// 40 = 0x28
	SFUPointerKeyDictionary *mCommentMap;	// 44 = 0x2c
	EDProcessors *mProcessors;	// 48 = 0x30
	EDWarnings *mWarnings;	// 52 = 0x34
	ESDContainer *mEscherDrawing;	// 56 = 0x38
}
@property(retain) id defaultGridlineColor;	// G=0x345abea5; S=0x345abe25; converted property
@property(retain) id defaultGridlineColorReference;	// G=0x345abd1d; S=0x343b2781; converted property
@property(assign, getter=isDisplayFormulas) bool displayFormulas;	// G=0x343c06c1; S=0x343b2591; converted property
@property(assign, getter=isDisplayGridlines) bool displayGridlines;	// G=0x343c11c9; S=0x343b25a1; converted property
@property(retain) id escherDrawing;	// G=0x345abd0d; S=0x345abd4d; converted property
@property(retain) id headerFooter;	// G=0x345abcc9; S=0x343a3321; converted property
@property(assign, getter=isHidden) bool hidden;	// G=0x3439d90d; S=0x344bb49d; converted property
@property(assign, nonatomic) bool isDialogSheet;	// G=0x345abcf9; S=0x343a2745; @synthesize=mIsDialogSheet
@property(retain) id name;	// G=0x343bf011; S=0x344bb461; converted property
@property(retain) id pageSetup;	// G=0x345255c5; S=0x343a3519; converted property
+ (id)sheetWithWorkbook:(id)workbook;	// 0x345abf45
- (id)initWithWorkbook:(id)workbook;	// 0x344bb115
- (void)addDrawable:(id)drawable;	// 0x343b133d
- (void)applyProcessors;	// 0x343bd82d
- (void)dealloc;	// 0x343c8c39
// converted property getter: - (id)defaultGridlineColor;	// 0x345abea5
// converted property getter: - (id)defaultGridlineColorReference;	// 0x345abd1d
- (void)doneWithNonRowContent;	// 0x345abec5
- (id)drawableAtIndex:(unsigned)index;	// 0x344bfe65
- (unsigned)drawableCount;	// 0x343c6155
- (id)drawableEnumerator;	// 0x345abd2d
- (id)drawables;	// 0x345abcd9
- (id)edCommentForESDObject:(id)esdobject;	// 0x345abda5
- (id)edTextBoxForESDObject:(id)esdobject;	// 0x345abde5
// converted property getter: - (id)escherDrawing;	// 0x345abd0d
// converted property getter: - (id)headerFooter;	// 0x345abcc9
// declared property getter: - (bool)isDialogSheet;	// 0x345abcf9
// converted property getter: - (bool)isDisplayFormulas;	// 0x343c06c1
// converted property getter: - (bool)isDisplayGridlines;	// 0x343c11c9
// converted property getter: - (bool)isHidden;	// 0x3439d90d
// converted property getter: - (id)name;	// 0x343bf011
// converted property getter: - (id)pageSetup;	// 0x345255c5
- (id)processors;	// 0x343a1ff9
- (void)reduceMemoryIfPossible;	// 0x345abd09
- (void)removeDrawableAtIndex:(unsigned)index;	// 0x345abe05
// converted property setter: - (void)setDefaultGridlineColor:(id)color;	// 0x345abe25
// converted property setter: - (void)setDefaultGridlineColorReference:(id)reference;	// 0x343b2781
// converted property setter: - (void)setDisplayFormulas:(bool)formulas;	// 0x343b2591
// converted property setter: - (void)setDisplayGridlines:(bool)gridlines;	// 0x343b25a1
- (void)setEDComment:(id)comment forESDObject:(id)esdobject;	// 0x345abd85
- (void)setEDTextBox:(id)box forESDObject:(id)esdobject;	// 0x345abdc5
// converted property setter: - (void)setEscherDrawing:(id)drawing;	// 0x345abd4d
// converted property setter: - (void)setHeaderFooter:(id)footer;	// 0x343a3321
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x344bb49d
// declared property setter: - (void)setIsDialogSheet:(bool)sheet;	// 0x343a2745
// converted property setter: - (void)setName:(id)name;	// 0x344bb461
// converted property setter: - (void)setPageSetup:(id)setup;	// 0x343a3519
- (void)setup;	// 0x344bb2fd
- (void)teardown;	// 0x343c914d
- (id)warnings;	// 0x345abce9
- (id)workbook;	// 0x345582f9
@end

