/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQWrapPointGenerator.h"
#import "GQHState.h"

@class GQHStyle, GQDWPContainerHint, GQDSStyle, GQWrapPointSet;

__attribute__((visibility("hidden")))
@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
@private
	CFDictionaryRef mFloatingDrawables;	// 108 = 0x6c
	int mMode;	// 112 = 0x70
	CFDictionaryRef mHeaders;	// 116 = 0x74
	CFDictionaryRef mFooters;	// 120 = 0x78
	CFArrayRef mSectionStyles;	// 124 = 0x7c
	CFDictionaryRef mPageWrapPointsMap;	// 128 = 0x80
	int mCurrentPageIndex;	// 132 = 0x84
	int mStartPageAt;	// 136 = 0x88
	int mStartPageAtValueChangedAtPageIndex;	// 140 = 0x8c
	GQHStyle *mCurrentLayoutStyle;	// 144 = 0x90
	GQHStyle *mCurrentParagraphStyle;	// 148 = 0x94
	GQDSStyle *mCurrentBaseParagraphStyle;	// 152 = 0x98
	CFStringRef mCurrentCachedParagraphClass;	// 156 = 0x9c
	GQHStyle *mCurrentSpanStyle;	// 160 = 0xa0
	GQDSStyle *mCurrentBaseSpanStyle;	// 164 = 0xa4
	CFStringRef mCurrentCachedSpanClass;	// 168 = 0xa8
	GQWrapPointSet *mCurrentWrapPointSet;	// 172 = 0xac
	CGRect mLastFrame;	// 176 = 0xb0
	BOOL mMappingFloatingDrawables;	// 192 = 0xc0
	BOOL mStartedPage;	// 193 = 0xc1
	BOOL mStartedSection;	// 194 = 0xc2
	BOOL mDidInsertPageHeader;	// 195 = 0xc3
	BOOL mDidFindContainerHint;	// 196 = 0xc4
	GQDWPContainerHint *mLastInsertedContainerHint;	// 200 = 0xc8
	CFArrayRef mAttachmentPositions;	// 204 = 0xcc
	long mAttachmentIdCounter;	// 208 = 0xd0
	long mFirstAttachmentId;	// 212 = 0xd4
	BOOL mSplitNextAttachment;	// 216 = 0xd8
	GQDSStyle *mCurrentSectionStyle;	// 220 = 0xdc
	BOOL mHasLayoutDrawables;	// 224 = 0xe0
	int mCurrentHintPageIndex;	// 228 = 0xe4
	int mCurrentHintColumnIndex;	// 232 = 0xe8
	BOOL mIsMappingHeadersFooters;	// 236 = 0xec
	int mHeaderFooterPageNumber;	// 240 = 0xf0
	CFDictionaryRef mDrawablePagesOrderToCssZOrderClassMap;	// 244 = 0xf4
	CGSize mPageSize;	// 248 = 0xf8
	CFArrayRef mTocHrefStack;	// 256 = 0x100
	BOOL mCurrentFrameHasSandbagFloats;	// 260 = 0x104
	int mProgressiveIndex;	// 264 = 0x108
}
@property(assign) int currentPageIndex;	// G=0x33c27d51; S=0x33c27d61; converted property
@property(assign) BOOL hasLayoutDrawables;	// G=0x33c27df5; S=0x33c27de5; converted property
@property(assign) BOOL isMappingHeadersFooters;	// G=0x33c27e15; S=0x33c27e05; converted property
@property(assign) int mode;	// G=0x33c27d31; S=0x33c27d41; converted property
@property(assign) CGSize pageSize;	// G=0x33c27ec5; S=0x33c27edd; converted property
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x33c27f09
- (void)addAttachmentPosition:(double)position;	// 0x33c29471
- (void)addFloatingDrawable:(id)drawable;	// 0x33c29dcd
- (void)addSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages;	// 0x33c299c5
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x33c282e5
- (void)addWrapPoint:(id)point;	// 0x33c28851
- (BOOL)allowInlineWrap;	// 0x33c27ef1
- (void)beginWrapPointSet;	// 0x33c289a9
- (void)clearFloatingDrawables;	// 0x33c29d19
- (void)clearWrapPoints;	// 0x33c27de1
- (void)closeStateLayoutElementsAndStyles;	// 0x33c2a3d9
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x33c285d5
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x33c282b1
- (CFStringRef)cssZOrderClassForDrawablePagesOrder:(int)drawablePagesOrder;	// 0x33c2821d
- (long)currentAttachmentId;	// 0x33c27da9
- (double)currentAttachmentPosition;	// 0x33c29425
// converted property getter: - (int)currentPageIndex;	// 0x33c27d51
- (void)dealloc;	// 0x33c29ead
- (id)drawableAtIndex:(int)index;	// 0x33c29d99
- (void)endSection;	// 0x33c28059
- (void)endWrapPointSet;	// 0x33c28915
- (void)finishedWithSplitAttachment;	// 0x33c294b5
- (long)firstAttachmentId;	// 0x33c27dd1
- (int)floatingDrawablesCount;	// 0x33c29e7d
- (id)footerForName:(CFStringRef)name;	// 0x33c29bc1
- (void)handleContainerHint:(id)hint;	// 0x33c28dbd
// converted property getter: - (BOOL)hasLayoutDrawables;	// 0x33c27df5
- (id)headerForName:(CFStringRef)name;	// 0x33c29c91
- (void)inContent;	// 0x33c28349
- (void)insertAttachmentPlaceholder;	// 0x33c2933d
// converted property getter: - (BOOL)isMappingHeadersFooters;	// 0x33c27e15
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned)index;	// 0x33c294e1
// converted property getter: - (int)mode;	// 0x33c27d31
- (double)moveToNextAttachmentPosition;	// 0x33c293e9
- (BOOL)needAbsolutelyPositionedTables;	// 0x33c28039
- (long)nextAttachmentId;	// 0x33c27db9
- (void)openStateLayoutElementsAndStyles;	// 0x33c2a5f9
- (void)overrideSectionStyle:(id)style;	// 0x33c298a1
- (CFArrayRef)pageDrawables:(int)drawables;	// 0x33c29cb5
- (int)pageNumberForHeaderOrFooter;	// 0x33c27e25
// converted property getter: - (CGSize)pageSize;	// 0x33c27ec5
- (CFDictionaryRef)pagesOrderToCssZOrderClassMapDictionary;	// 0x33c27eb5
- (void)popTocHref;	// 0x33c28181
- (void)pushTocHref:(CFStringRef)href;	// 0x33c281b5
- (XXStruct_ny2fMB)rangeForSectionStyleAtPageIndex:(int)pageIndex;	// 0x33c298d1
- (void)resolveHeaderName:(const CFStringRef *)name footerName:(const CFStringRef *)name2;	// 0x33c289ed
- (id)sectionStyleForPageIndex:(int)pageIndex;	// 0x33c2993d
- (id)sectionStyleRunForRunBeforePageIndex:(int)runBeforePageIndex;	// 0x33c2a899
- (void)setCurrentLayoutStyle:(id)style;	// 0x33c2984d
// converted property setter: - (void)setCurrentPageIndex:(int)index;	// 0x33c27d61
- (void)setCurrentParagraphStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x33c29755
- (void)setCurrentSpanStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x33c2965d
- (void)setDidFindContainerHint:(BOOL)findContainerHint;	// 0x33c27d81
- (void)setDidInsertPageHeader:(BOOL)insertPageHeader;	// 0x33c27d71
- (void)setFooters:(CFArrayRef)footers;	// 0x33c29b15
// converted property setter: - (void)setHasLayoutDrawables:(BOOL)drawables;	// 0x33c27de5
- (void)setHeaders:(CFArrayRef)headers;	// 0x33c29be5
// converted property setter: - (void)setIsMappingHeadersFooters:(BOOL)footers;	// 0x33c27e05
// converted property setter: - (void)setMode:(int)mode;	// 0x33c27d41
- (void)setOutlineLevel:(int)level;	// 0x33c27e6d
- (void)setOutlineStyleType:(int)type;	// 0x33c27e91
// converted property setter: - (void)setPageSize:(CGSize)size;	// 0x33c27edd
- (bool)splitNextAttachment;	// 0x33c27d91
- (void)startLayout;	// 0x33c2a1d9
- (void)startSection;	// 0x33c2a0f1
- (unsigned)tocDepth;	// 0x33c281fd
- (BOOL)useOutline;	// 0x33c27e55
- (id)wrapPointSetForPage:(int)page;	// 0x33c2a595
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)wrapPoints;	// 0x33c28819
@end
