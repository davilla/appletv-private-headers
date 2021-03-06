/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQHState.h"
#import "iWorkImport-Structs.h"
#import "GQWrapPointGenerator.h"

@class GQHStyle, GQDWPContainerHint, GQDSStyle, GQWrapPointSet;

@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
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
@property(assign) int currentPageIndex;	// G=0x35830255; S=0x35830265; converted property
@property(assign) BOOL hasLayoutDrawables;	// G=0x35831839; S=0x35831829; converted property
@property(assign) BOOL isMappingHeadersFooters;	// G=0x35831859; S=0x35831849; converted property
@property(assign) int mode;	// G=0x3582fe4d; S=0x3582fe5d; converted property
@property(assign) CGSize pageSize;	// G=0x35831a35; S=0x35831a4d; converted property
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x3582fa01
- (id).cxx_construct;	// 0x35831c55
- (void)addAttachmentPosition:(double)position;	// 0x3583062d
- (void)addFloatingDrawable:(id)drawable;	// 0x3582fc85
- (void)addSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages;	// 0x3582ffed
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x35831901
- (void)addWrapPoint:(id)point;	// 0x3583124d
- (BOOL)allowInlineWrap;	// 0x35831c3d
- (void)beginWrapPointSet;	// 0x35831179
- (void)clearFloatingDrawables;	// 0x3582fd6d
- (void)clearWrapPoints;	// 0x35831599
- (void)closeStateLayoutElementsAndStyles;	// 0x35831f95
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x3583135d
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x35831961
- (CFStringRef)cssZOrderClassForDrawablePagesOrder:(int)drawablePagesOrder;	// 0x35831991
- (long)currentAttachmentId;	// 0x3583070d
- (double)currentAttachmentPosition;	// 0x35830671
// converted property getter: - (int)currentPageIndex;	// 0x35830255
- (void)dealloc;	// 0x3582fb2d
- (id)drawableAtIndex:(int)index;	// 0x3582fd35
- (void)endSection;	// 0x35831afd
- (void)endWrapPointSet;	// 0x358311bd
- (void)finishedWithSplitAttachment;	// 0x35830601
- (long)firstAttachmentId;	// 0x35830735
- (int)floatingDrawablesCount;	// 0x3582fc51
- (id)footerForName:(CFStringRef)name;	// 0x3582ff2d
- (void)handleContainerHint:(id)hint;	// 0x358307ed
// converted property getter: - (BOOL)hasLayoutDrawables;	// 0x35831839
- (id)headerForName:(CFStringRef)name;	// 0x3582fe6d
- (void)inContent;	// 0x3583159d
- (void)insertAttachmentPlaceholder;	// 0x35830745
// converted property getter: - (BOOL)isMappingHeadersFooters;	// 0x35831859
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned)index;	// 0x3583048d
// converted property getter: - (int)mode;	// 0x3582fe4d
- (double)moveToNextAttachmentPosition;	// 0x358306d1
- (BOOL)needAbsolutelyPositionedTables;	// 0x35831c21
- (long)nextAttachmentId;	// 0x3583071d
- (void)openStateLayoutElementsAndStyles;	// 0x35832119
- (void)overrideSectionStyle:(id)style;	// 0x35830225
- (CFArrayRef)pageDrawables:(int)drawables;	// 0x3582fde9
- (int)pageNumberForHeaderOrFooter;	// 0x35831869
// converted property getter: - (CGSize)pageSize;	// 0x35831a35
- (CFDictionaryRef)pagesOrderToCssZOrderClassMapDictionary;	// 0x35831a25
- (void)popTocHref;	// 0x35831ac5
- (void)pushTocHref:(CFStringRef)href;	// 0x35831a7d
- (XXStruct_ny2fMB)rangeForSectionStyleAtPageIndex:(int)pageIndex;	// 0x358301bd
- (void)resolveHeaderName:(const CFStringRef *)name footerName:(const CFStringRef *)name2;	// 0x35830d7d
- (id)sectionStyleForPageIndex:(int)pageIndex;	// 0x35830135
- (id)sectionStyleRunForRunBeforePageIndex:(int)runBeforePageIndex;	// 0x358323c1
- (void)setCurrentLayoutStyle:(id)style;	// 0x35830275
// converted property setter: - (void)setCurrentPageIndex:(int)index;	// 0x35830265
- (void)setCurrentParagraphStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x358302c5
- (void)setCurrentSpanStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x35830399
- (void)setDidFindContainerHint:(BOOL)findContainerHint;	// 0x3583047d
- (void)setDidInsertPageHeader:(BOOL)insertPageHeader;	// 0x3583046d
- (void)setFooters:(CFArrayRef)footers;	// 0x3582ff51
// converted property setter: - (void)setHasLayoutDrawables:(BOOL)drawables;	// 0x35831829
- (void)setHeaders:(CFArrayRef)headers;	// 0x3582fe91
// converted property setter: - (void)setIsMappingHeadersFooters:(BOOL)footers;	// 0x35831849
// converted property setter: - (void)setMode:(int)mode;	// 0x3582fe5d
- (void)setOutlineLevel:(int)level;	// 0x358318b1
- (void)setOutlineStyleType:(int)type;	// 0x358318d9
// converted property setter: - (void)setPageSize:(CGSize)size;	// 0x35831a4d
- (bool)splitNextAttachment;	// 0x358305e9
- (void)startLayout;	// 0x35831dad
- (void)startSection;	// 0x35831cbd
- (unsigned)tocDepth;	// 0x35831a61
- (BOOL)useOutline;	// 0x35831899
- (id)wrapPointSetForPage:(int)page;	// 0x35831c59
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)wrapPoints;	// 0x35831321
@end

