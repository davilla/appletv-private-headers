/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSGlyphStorage.h"
#import "UIFoundation-Structs.h"
#import "NSCoding.h"

@class NSStorage, NSTextContainer, NSTextStorage, NSGlyphGenerator, NSTypesetter, NSMutableArray, UIFont, NSRunStorage, NSSortedArray;

__attribute__((visibility("hidden")))
@interface NSLayoutManager : NSObject <NSCoding, NSGlyphStorage> {
	NSTextStorage *_textStorage;	// 4 = 0x4
	NSGlyphGenerator *_glyphGenerator;	// 8 = 0x8
	NSTypesetter *_typesetter;	// 12 = 0xc
	NSMutableArray *_textContainers;	// 16 = 0x10
	NSStorage *_containerUsedRects;	// 20 = 0x14
	NSStorage *_glyphs;	// 24 = 0x18
	NSRunStorage *_containerRuns;	// 28 = 0x1c
	NSRunStorage *_fragmentRuns;	// 32 = 0x20
	NSRunStorage *_glyphLocations;	// 36 = 0x24
	NSRunStorage *_glyphRotationRuns;	// 40 = 0x28
	CGRect _extraLineFragmentRect;	// 44 = 0x2c
	CGRect _extraLineFragmentUsedRect;	// 60 = 0x3c
	NSTextContainer *_extraLineFragmentContainer;	// 76 = 0x4c
	NSSortedArray *_glyphHoles;	// 80 = 0x50
	NSSortedArray *_layoutHoles;	// 84 = 0x54
	lmFlags _lmFlags;	// 88 = 0x58
	id _delegate;	// 92 = 0x5c
	unsigned short _textViewResizeDisableStack;	// 96 = 0x60
	unsigned short _displayInvalidationDisableStack;	// 98 = 0x62
	NSRange _deferredDisplayCharRange;	// 100 = 0x64
	CGRect *_cachedRectArray;	// 108 = 0x6c
	unsigned _cachedRectArrayCapacity;	// 112 = 0x70
	char *_glyphBuffer;	// 116 = 0x74
	unsigned _glyphBufferSize;	// 120 = 0x78
	NSRange _cachedLocationNominalGlyphRange;	// 124 = 0x7c
	unsigned _cachedLocationGlyphIndex;	// 132 = 0x84
	CGPoint _cachedLocation;	// 136 = 0x88
	NSRange _cachedFontCharRange;	// 144 = 0x90
	UIFont *_cachedFont;	// 152 = 0x98
	unsigned _firstUnlaidGlyphIndex;	// 156 = 0x9c
	unsigned _firstUnlaidCharIndex;	// 160 = 0xa0
	NSRange _newlyFilledGlyphRange;	// 164 = 0xa4
	id _extraData;	// 172 = 0xac
}
@property(assign) BOOL allowsNonContiguousLayout;	// G=0x368ab179; S=0x368ab0c5; converted property
@property(assign) BOOL backgroundLayoutEnabled;	// G=0x368ab2c9; S=0x368ab265; converted property
@property(assign) id delegate;	// G=0x368aa6f1; S=0x368aa701; converted property
@property(readonly, assign) CGRect extraLineFragmentRect;	// G=0x368ad271; converted property
@property(readonly, assign) CGRect extraLineFragmentUsedRect;	// G=0x368ad285; converted property
@property(readonly, assign) unsigned firstUnlaidGlyphIndex;	// G=0x368acc91; converted property
@property(assign) BOOL flipsIfNeeded;	// G=0x368a456d; S=0x368a4585; converted property
@property(retain) NSGlyphGenerator *glyphGenerator;	// G=0x368aa465; S=0x368aa4ad; converted property
@property(assign) float hyphenationFactor;	// G=0x368ab589; S=0x368ab4ed; converted property
@property(assign) BOOL ignoresAntialiasThreshold;	// G=0x368a4701; S=0x368a4705; converted property
@property(assign) BOOL ignoresViewTransformations;	// G=0x368a4631; S=0x368a4649; converted property
@property(assign) BOOL showsControlCharacters;	// G=0x368ab4d9; S=0x368ab441; converted property
@property(assign) BOOL showsInvisibleCharacters;	// G=0x368ab42d; S=0x368ab395; converted property
@property(readonly, retain) NSMutableArray *textContainers;	// G=0x368aa7d9; converted property
@property(retain) NSTextStorage *textStorage;	// G=0x368a9be5; S=0x368a9c05; converted property
@property(retain) NSTypesetter *typesetter;	// G=0x368aa5a5; S=0x368aa5fd; converted property
@property(assign) int typesetterBehavior;	// G=0x368ab5cd; S=0x368ab5a9; converted property
@property(assign) BOOL usesFontLeading;	// G=0x368b0f95; S=0x368b0fad; converted property
@property(assign) BOOL usesScreenFonts;	// G=0x368ab2dd; S=0x368ab2f1; converted property
+ (id)_defaultLinkAttributes;	// 0x3689754d
+ (void)_doSomeBackgroundLayout;	// 0x3689a821
+ (BOOL)_ignoresViewTransformations;	// 0x368a8c8d
+ (BOOL)_inBackgroundLayout;	// 0x3689a81d
+ (BOOL)_showsControlCharacters;	// 0x368a8ca1
+ (BOOL)_showsInvisibleCharacters;	// 0x368a8c91
+ (BOOL)_usesScreenFonts;	// 0x368a8c89
+ (void)initialize;	// 0x368a8b11
- (id)init;	// 0x368a91a1
- (id)initWithCoder:(id)coder;	// 0x368a966d
- (void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)rawGlyphRange byDelta:(int)delta;	// 0x3689861d
- (BOOL)_alwaysDrawsActive;	// 0x368a4709
- (id)_attachmentSizesRun;	// 0x368a417d
- (id)_blockDescription;	// 0x3689b521
- (NSRange)_blockRangeForCharRange:(NSRange)charRange;	// 0x36897631
- (NSRange)_blockRangeForGlyphRange:(NSRange)glyphRange;	// 0x36897905
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange;	// 0x36897c8d
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange completeRows:(BOOL *)rows;	// 0x36897971
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange;	// 0x36897d35
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange completeRows:(BOOL *)rows;	// 0x36897cb9
- (CGRect)_boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer fast:(BOOL)fast fullLineRectsOnly:(BOOL)only;	// 0x3689e295
- (BOOL)_canDoLayout;	// 0x36898621
- (NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)andAfterContainer;	// 0x368aa7e9
- (void)_clearCurrentAttachmentSettings;	// 0x368a4235
- (void)_clearTemporaryAttributes;	// 0x368a425d
- (void)_clearTemporaryAttributesForCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x368a42a1
- (void)_commonInit;	// 0x368a8cb1
- (id)_containerDescription;	// 0x3689a829
- (unsigned)_currentAttachmentIndex;	// 0x368a41b9
- (CGRect)_currentAttachmentRect;	// 0x368a4181
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned)glyphIndex nextGlyphIndex:(unsigned *)index;	// 0x36898a89
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned)glyphIndex forCharacterRange:(NSRange)characterRange inTextContainer:(id)textContainer lineLimit:(unsigned)limit nextGlyphIndex:(unsigned *)index;	// 0x36898a81
- (void)_drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point parameters:(NSDrawingParameters *)parameters;	// 0x368a16e1
- (void)_drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x368a1fa9
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders;	// 0x368a6791
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders flipped:(BOOL)flipped;	// 0x368a62c1
- (void)_drawLineForGlyphRange:(NSRange)glyphRange type:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x368a67f1
- (BOOL)_drawsUnderlinesLikeWebKit;	// 0x368a5d61
- (NSRange)_extendedCharRangeForInvalidation:(NSRange)invalidation editedCharRange:(NSRange)range;	// 0x36897e29
- (void)_fillGlyphHoleAtIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x36898671
- (void)_fillGlyphHoleForCharacterRange:(NSRange)characterRange startGlyphIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x36898705
- (void)_fillLayoutHoleAtIndex:(unsigned)index desiredNumberOfLines:(unsigned)lines;	// 0x3689a389
- (void)_fillLayoutHoleForCharacterRange:(NSRange)characterRange desiredNumberOfLines:(unsigned)lines isSoft:(BOOL)soft;	// 0x36898ba9
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer hintGlyphRange:(NSRange)range okToFillHoles:(BOOL)fillHoles;	// 0x3689eb05
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x3689f16d
- (void)_firstTextViewChanged;	// 0x368a16dd
- (void)_fixSelectionAfterChangeInCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x3689c175
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;	// 0x368abaa9
- (unsigned)_glyphAtIndex:(unsigned)index characterIndex:(unsigned *)index2 glyphInscription:(unsigned *)inscription isValidIndex:(BOOL *)index4;	// 0x368a3f25
- (id)_glyphDescription;	// 0x3689b0f9
- (id)_glyphDescriptionForGlyphRange:(NSRange)glyphRange;	// 0x3689af11
- (id)_glyphGenerator;	// 0x368aa49d
- (id)_glyphHoleDescription;	// 0x3689b12d
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x3689a6a5
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x3689a6c9
- (id)_glyphLocationDescription;	// 0x3689aefd
- (NSRange)_glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer fast:(BOOL)fast okToFillHoles:(BOOL)fillHoles;	// 0x3689f821
- (NSRange)_glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range okToFillHoles:(BOOL)fillHoles;	// 0x3689a6f1
- (id)_glyphTreeDescription;	// 0x3689b519
- (void)_growCachedRectArrayToSize:(unsigned)size;	// 0x3689c179
- (BOOL)_hasSeenRightToLeft;	// 0x368a4555
- (unsigned)_indexOfFirstGlyphInTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x368a042d
- (void)_insertGlyphs:(unsigned *)glyphs elasticAttributes:(BOOL *)attributes count:(unsigned)count atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x368a4119
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned)index;	// 0x368a4b51
- (void)_invalidateDisplayIfNeeded;	// 0x3689c0f9
- (void)_invalidateGlyphsForCharacterRange:(NSRange)characterRange editedCharacterRange:(NSRange)range changeInLength:(int)length actualCharacterRange:(NSRange *)range4;	// 0x368ab609
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length;	// 0x368a0ef9
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length includeBlocks:(BOOL)blocks;	// 0x368a0a9d
- (void)_invalidateInsertionPoint;	// 0x3689c0c9
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft;	// 0x368a16b9
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft invalidateUsage:(BOOL)usage;	// 0x368a0f1d
- (void)_invalidateUsageForTextContainersInRange:(NSRange)range;	// 0x3689ba01
- (BOOL)_isInUILayoutMode;	// 0x368a450d
- (id)_layoutHoleDescription;	// 0x3689b32d
- (id)_layoutTreeDescription;	// 0x3689b51d
- (id)_lineFragmentDescription;	// 0x3689aee9
- (id)_lineFragmentDescription:(BOOL)description;	// 0x3689aea5
- (id)_lineFragmentDescriptionForGlyphRange:(NSRange)glyphRange includeGlyphLocations:(BOOL)locations;	// 0x3689abcd
- (void)_lineGlyphRange:(NSRange)range type:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x368a81dd
- (void)_markSelfAsDirtyForBackgroundLayout:(id)backgroundLayout;	// 0x3689a825
- (void)_mergeGlyphHoles;	// 0x36897629
- (void)_mergeLayoutHoles;	// 0x3689762d
- (BOOL)_needToFlushGlyph;	// 0x368a3fb1
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned)index;	// 0x36898ba1
- (char *)_packedGlyphs:(unsigned)glyphs range:(NSRange)range length:(unsigned *)length;	// 0x368a1ec9
- (NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)glyphRange;	// 0x3689a73d
- (void)_primitiveDeleteGlyphsInRange:(NSRange)range;	// 0x368ac19d
- (NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)characterRange;	// 0x3689a7a1
- (void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x368ab8a9
- (void)_promoteGlyphStoreToFormat:(unsigned)format;	// 0x368a4179
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned)index;	// 0x3689ba55
- (CGRect *)_rectArrayForRange:(NSRange)range withinSelectionRange:(NSRange)range2 rangeIsCharRange:(BOOL)range3 singleRectOnly:(BOOL)only fullLineRectsOnly:(BOOL)only5 inTextContainer:(id)textContainer rectCount:(unsigned *)count rangeWithinContainer:(NSRange *)container glyphsDrawOutsideLines:(BOOL *)lines;	// 0x3689c1cd
- (void)_resizeTextViewForTextContainer:(id)textContainer;	// 0x3689c16d
- (float)_rotationForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x368a3e45
- (id)_rowArrayCache;	// 0x36897da5
- (id)_selectedRanges;	// 0x3689c171
- (id)_selectionRangesForInsertionPointRange:(NSRange)insertionPointRange;	// 0x368a5cd9
- (void)_setAlwaysDrawsActive:(BOOL)active;	// 0x368a4731
- (void)_setCurrentAttachmentRect:(CGRect)rect index:(unsigned)index;	// 0x368a41dd
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)kit;	// 0x368a5cdd
- (void)_setGlyphGenerator:(id)generator;	// 0x368aa595
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate integerOffsetPerLineEstimate:(unsigned)estimate2;	// 0x368ab1f1
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate offsetPerLineEstimate:(float)estimate2;	// 0x368ab18d
- (void)_setHasSeenRightToLeft:(BOOL)left;	// 0x368a4531
- (void)_setIsInUILayoutMode:(BOOL)uilayoutMode;	// 0x368a44e9
- (void)_setNeedToFlushGlyph:(BOOL)flushGlyph;	// 0x368a3fc9
- (void)_setRotation:(float)rotation forGlyphAtIndex:(unsigned)index;	// 0x368a3e0d
- (void)_setRowArrayCache:(id)cache;	// 0x36897dc9
- (void)_showStyledCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context options:(id)options lineHeight:(float)height;	// 0x368a5f15
- (void)_simpleDeleteGlyphsInRange:(NSRange)range;	// 0x368a4085
- (void)_simpleInsertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index elastic:(BOOL)elastic;	// 0x368a3fed
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x3689a681
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x3689a435
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x368b0c55
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x368b0d69
- (id)_temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x368b0e95
- (void)_updateUsageForTextContainer:(id)textContainer addingUsedRect:(CGRect)rect;	// 0x3689b7b5
- (NSStoredContainerUsage *)_validatedStoredUsageForTextContainerAtIndex:(unsigned)index;	// 0x3689c075
- (void)addTemporaryAttribute:(id)attribute value:(id)value forCharacterRange:(NSRange)characterRange;	// 0x368b0831
- (void)addTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x368b0619
- (void)addTextContainer:(id)container;	// 0x368aa915
// converted property getter: - (BOOL)allowsNonContiguousLayout;	// 0x368ab179
- (CGSize)attachmentSizeForGlyphAtIndex:(unsigned)index;	// 0x368ad825
- (id)attributedString;	// 0x368a9bf5
// converted property getter: - (BOOL)backgroundLayoutEnabled;	// 0x368ab2c9
- (float)baselineOffsetForGlyphAtIndex:(unsigned)index;	// 0x368a460d
- (CGRect)boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer;	// 0x368aed71
- (CGRect)boundsRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x368ae811
- (CGRect)boundsRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x368ae63d
- (unsigned)characterIndexForGlyphAtIndex:(unsigned)index;	// 0x368ac3c9
- (unsigned)characterIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceBetweenInsertionPoints:(float *)distanceBetweenInsertionPoints;	// 0x368afdd1
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x368ae999
- (void)dealloc;	// 0x368a9321
- (float)defaultBaselineOffsetForFont:(id)font;	// 0x368b0f69
- (float)defaultLineHeightForFont:(id)font;	// 0x368b0ef1
// converted property getter: - (id)delegate;	// 0x368aa6f1
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x368ac1ad
- (id)description;	// 0x368a9aa1
- (void)drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x368a5e99
- (void)drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x368a5ef1
- (void)drawStrikethroughForGlyphRange:(NSRange)glyphRange strikethroughType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x368a8181
- (void)drawUnderlineForGlyphRange:(NSRange)glyphRange underlineType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x368a8125
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned)index;	// 0x368ad809
- (void)encodeWithCoder:(id)coder;	// 0x368a94b5
- (void)ensureGlyphsForCharacterRange:(NSRange)characterRange;	// 0x368abcd9
- (void)ensureGlyphsForGlyphRange:(NSRange)glyphRange;	// 0x368abce1
- (void)ensureLayoutForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x368ac059
- (void)ensureLayoutForCharacterRange:(NSRange)characterRange;	// 0x368abce9
- (void)ensureLayoutForGlyphRange:(NSRange)glyphRange;	// 0x368abd3d
- (void)ensureLayoutForTextContainer:(id)textContainer;	// 0x368abd45
// converted property getter: - (CGRect)extraLineFragmentRect;	// 0x368ad271
- (id)extraLineFragmentTextContainer;	// 0x368ad295
// converted property getter: - (CGRect)extraLineFragmentUsedRect;	// 0x368ad285
- (void)fillBackgroundRectArray:(CGRect *)array count:(unsigned)count forCharacterRange:(NSRange)characterRange color:(id)color;	// 0x368a5ec5
- (void)finalize;	// 0x368a91e5
- (unsigned)firstUnlaidCharacterIndex;	// 0x368acab5
// converted property getter: - (unsigned)firstUnlaidGlyphIndex;	// 0x368acc91
// converted property getter: - (BOOL)flipsIfNeeded;	// 0x368a456d
- (float)fractionOfDistanceThroughGlyphForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x368afd59
- (void)getFirstUnlaidCharacterIndex:(unsigned *)index glyphIndex:(unsigned *)index2;	// 0x368acca5
- (unsigned)getGlyphs:(unsigned *)glyphs range:(NSRange)range;	// 0x368ac4e1
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits;	// 0x368ac469
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x368ac4a1
- (int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned)index inDisplayOrder:(BOOL)displayOrder positions:(float **)positions characterIndexes:(unsigned **)indexes count:(unsigned *)count alternatePositions:(float **)positions6 characterIndexes:(unsigned **)indexes7 count:(unsigned *)count8;	// 0x368a5b8d
- (unsigned)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned)index alternatePositions:(BOOL)positions inDisplayOrder:(BOOL)displayOrder positions:(float *)positions4 characterIndexes:(unsigned *)indexes;	// 0x368b02bd
- (unsigned)glyphAtIndex:(unsigned)index;	// 0x368ac329
- (unsigned)glyphAtIndex:(unsigned)index isValidIndex:(BOOL *)index2;	// 0x368ac2dd
// converted property getter: - (id)glyphGenerator;	// 0x368aa465
- (unsigned)glyphIndexForCharacterAtIndex:(unsigned)index;	// 0x368ac409
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x368aee8d
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceThroughGlyph:(float *)distanceThroughGlyph;	// 0x368afd79
- (NSRange)glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x368aedc5
- (NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)boundingRectWithoutAdditionalLayout inTextContainer:(id)textContainer;	// 0x368aee21
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x368ae909
- (NSRange)glyphRangeForTextContainer:(id)textContainer;	// 0x368aea29
- (BOOL)hasNonContiguousLayout;	// 0x368ab20d
// converted property getter: - (float)hyphenationFactor;	// 0x368ab589
// converted property getter: - (BOOL)ignoresAntialiasThreshold;	// 0x368a4701
// converted property getter: - (BOOL)ignoresViewTransformations;	// 0x368a4631
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x368ac149
- (void)insertGlyphs:(const unsigned *)glyphs length:(unsigned)length forStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index4;	// 0x368ac115
- (void)insertTextContainer:(id)container atIndex:(unsigned)index;	// 0x368aa955
- (int)intAttribute:(int)attribute forGlyphAtIndex:(unsigned)index;	// 0x368ac449
- (void)invalidateDisplayForCharacterRange:(NSRange)characterRange;	// 0x368ab8ad
- (void)invalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x368aba61
- (void)invalidateGlyphsForCharacterRange:(NSRange)characterRange changeInLength:(int)length actualCharacterRange:(NSRange *)range;	// 0x368ab79d
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)glyphRange;	// 0x368ac265
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x368ab7c5
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange isSoft:(BOOL)soft actualCharacterRange:(NSRange *)range;	// 0x368ab835
- (BOOL)isValidGlyphIndex:(unsigned)index;	// 0x368ac3a9
- (unsigned)layoutOptions;	// 0x368ab5ed
- (CGRect)layoutRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x368ae715
- (CGRect)layoutRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x368ae42d
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x368ad1b1
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x368ad179
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x368ad24d
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range allowLayout:(BOOL)layout;	// 0x368ad20d
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x368ad1d5
- (CGPoint)locationForGlyphAtIndex:(unsigned)index;	// 0x368ad2a5
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned)index;	// 0x368ad7ed
- (unsigned)numberOfGlyphs;	// 0x368ac27d
- (NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned)nominallySpacedGlyphsContainingIndex;	// 0x368aec59
- (CGRect *)rectArrayForCharacterRange:(NSRange)characterRange withinSelectedCharacterRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x368aece9
- (CGRect *)rectArrayForGlyphRange:(NSRange)glyphRange withinSelectedGlyphRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x368aed2d
- (void)removeTemporaryAttribute:(id)attribute forCharacterRange:(NSRange)characterRange;	// 0x368b0a7d
- (void)removeTextContainerAtIndex:(unsigned)index;	// 0x368aac45
- (void)replaceGlyphAtIndex:(unsigned)index withGlyph:(unsigned)glyph;	// 0x368ac171
- (void)replaceTextStorage:(id)storage;	// 0x368aa2d9
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x368a1e35
// converted property setter: - (void)setAllowsNonContiguousLayout:(BOOL)layout;	// 0x368ab0c5
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x368aca9d
// converted property setter: - (void)setBackgroundLayoutEnabled:(BOOL)enabled;	// 0x368ab265
- (void)setBaselineOffset:(float)offset forGlyphAtIndex:(unsigned)index;	// 0x368a4629
- (void)setBoundsRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x368ae275
- (void)setCharacterIndex:(unsigned)index forGlyphAtIndex:(unsigned)index2;	// 0x368ac1f5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x368aa701
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphAtIndex:(unsigned)index;	// 0x368aca61
- (void)setExtraLineFragmentRect:(CGRect)rect usedRect:(CGRect)rect2 textContainer:(id)container;	// 0x368ac7a1
// converted property setter: - (void)setFlipsIfNeeded:(BOOL)needed;	// 0x368a4585
// converted property setter: - (void)setGlyphGenerator:(id)generator;	// 0x368aa4ad
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x368ab4ed
// converted property setter: - (void)setIgnoresAntialiasThreshold:(BOOL)threshold;	// 0x368a4705
// converted property setter: - (void)setIgnoresViewTransformations:(BOOL)transformations;	// 0x368a4649
- (void)setIntAttribute:(int)attribute value:(int)value forGlyphAtIndex:(unsigned)index;	// 0x368ac221
- (void)setLayoutRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x368ade45
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3;	// 0x368ac601
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x368a45a9
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange;	// 0x368ac98d
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange coalesceRuns:(BOOL)runs;	// 0x368ac929
- (void)setLocations:(CGPoint *)locations startingGlyphIndexes:(unsigned *)indexes count:(unsigned)count forGlyphRange:(NSRange)glyphRange;	// 0x368ac9f1
- (void)setNotShownAttribute:(BOOL)attribute forGlyphAtIndex:(unsigned)index;	// 0x368aca59
// converted property setter: - (void)setShowsControlCharacters:(BOOL)characters;	// 0x368ab441
// converted property setter: - (void)setShowsInvisibleCharacters:(BOOL)characters;	// 0x368ab395
- (void)setTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x368b0461
- (void)setTextContainer:(id)container forGlyphRange:(NSRange)glyphRange;	// 0x368ac511
// converted property setter: - (void)setTextStorage:(id)storage;	// 0x368a9c05
// converted property setter: - (void)setTypesetter:(id)typesetter;	// 0x368aa5fd
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x368ab5a9
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x368b0fad
// converted property setter: - (void)setUsesScreenFonts:(BOOL)fonts;	// 0x368ab2f1
- (void)showAttachmentCell:(id)cell inRect:(CGRect)rect characterIndex:(unsigned)index;	// 0x368a6275
- (void)showCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context;	// 0x368a60c5
// converted property getter: - (BOOL)showsControlCharacters;	// 0x368ab4d9
// converted property getter: - (BOOL)showsInvisibleCharacters;	// 0x368ab42d
- (void)strikethroughGlyphRange:(NSRange)range strikethroughType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x368a8789
- (id)substituteFontForFont:(id)font;	// 0x368b0eb9
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x368b0c21
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x368b0c65
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x368b0349
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x368b0d9d
- (void)textContainerChangedGeometry:(id)geometry;	// 0x368aaf69
- (void)textContainerChangedTextView:(id)view;	// 0x368ab095
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x368acef5
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x368acce1
// converted property getter: - (id)textContainers;	// 0x368aa7d9
// converted property getter: - (id)textStorage;	// 0x368a9be5
- (void)textStorage:(id)storage edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length invalidatedRange:(NSRange)range5;	// 0x368abaad
// converted property getter: - (id)typesetter;	// 0x368aa5a5
// converted property getter: - (int)typesetterBehavior;	// 0x368ab5cd
- (void)underlineGlyphRange:(NSRange)range underlineType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x368a87d9
- (CGRect)usedRectForTextContainer:(id)textContainer;	// 0x368ad0ed
// converted property getter: - (BOOL)usesFontLeading;	// 0x368b0f95
// converted property getter: - (BOOL)usesScreenFonts;	// 0x368ab2dd
@end

