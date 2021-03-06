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
@property(assign) BOOL allowsNonContiguousLayout;	// G=0x32536d79; S=0x32536cc5; converted property
@property(assign) BOOL backgroundLayoutEnabled;	// G=0x32536ec9; S=0x32536e65; converted property
@property(assign) id delegate;	// G=0x325362f1; S=0x32536301; converted property
@property(readonly, assign) CGRect extraLineFragmentRect;	// G=0x32538e71; converted property
@property(readonly, assign) CGRect extraLineFragmentUsedRect;	// G=0x32538e85; converted property
@property(readonly, assign) unsigned firstUnlaidGlyphIndex;	// G=0x32538891; converted property
@property(assign) BOOL flipsIfNeeded;	// G=0x3253016d; S=0x32530185; converted property
@property(retain) NSGlyphGenerator *glyphGenerator;	// G=0x32536065; S=0x325360ad; converted property
@property(assign) float hyphenationFactor;	// G=0x32537189; S=0x325370ed; converted property
@property(assign) BOOL ignoresAntialiasThreshold;	// G=0x32530301; S=0x32530305; converted property
@property(assign) BOOL ignoresViewTransformations;	// G=0x32530231; S=0x32530249; converted property
@property(assign) BOOL showsControlCharacters;	// G=0x325370d9; S=0x32537041; converted property
@property(assign) BOOL showsInvisibleCharacters;	// G=0x3253702d; S=0x32536f95; converted property
@property(readonly, retain) NSMutableArray *textContainers;	// G=0x325363d9; converted property
@property(retain) NSTextStorage *textStorage;	// G=0x325357e5; S=0x32535805; converted property
@property(retain) NSTypesetter *typesetter;	// G=0x325361a5; S=0x325361fd; converted property
@property(assign) int typesetterBehavior;	// G=0x325371cd; S=0x325371a9; converted property
@property(assign) BOOL usesFontLeading;	// G=0x3253cb95; S=0x3253cbad; converted property
@property(assign) BOOL usesScreenFonts;	// G=0x32536edd; S=0x32536ef1; converted property
+ (id)_defaultLinkAttributes;	// 0x3252314d
+ (void)_doSomeBackgroundLayout;	// 0x32526421
+ (BOOL)_ignoresViewTransformations;	// 0x3253488d
+ (BOOL)_inBackgroundLayout;	// 0x3252641d
+ (BOOL)_showsControlCharacters;	// 0x325348a1
+ (BOOL)_showsInvisibleCharacters;	// 0x32534891
+ (BOOL)_usesScreenFonts;	// 0x32534889
+ (void)initialize;	// 0x32534711
- (id)init;	// 0x32534da1
- (id)initWithCoder:(id)coder;	// 0x3253526d
- (void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)rawGlyphRange byDelta:(int)delta;	// 0x3252421d
- (BOOL)_alwaysDrawsActive;	// 0x32530309
- (id)_attachmentSizesRun;	// 0x3252fd7d
- (id)_blockDescription;	// 0x32527121
- (NSRange)_blockRangeForCharRange:(NSRange)charRange;	// 0x32523231
- (NSRange)_blockRangeForGlyphRange:(NSRange)glyphRange;	// 0x32523505
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange;	// 0x3252388d
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange completeRows:(BOOL *)rows;	// 0x32523571
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange;	// 0x32523935
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange completeRows:(BOOL *)rows;	// 0x325238b9
- (CGRect)_boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer fast:(BOOL)fast fullLineRectsOnly:(BOOL)only;	// 0x32529e95
- (BOOL)_canDoLayout;	// 0x32524221
- (NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)andAfterContainer;	// 0x325363e9
- (void)_clearCurrentAttachmentSettings;	// 0x3252fe35
- (void)_clearTemporaryAttributes;	// 0x3252fe5d
- (void)_clearTemporaryAttributesForCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x3252fea1
- (void)_commonInit;	// 0x325348b1
- (id)_containerDescription;	// 0x32526429
- (unsigned)_currentAttachmentIndex;	// 0x3252fdb9
- (CGRect)_currentAttachmentRect;	// 0x3252fd81
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned)glyphIndex nextGlyphIndex:(unsigned *)index;	// 0x32524689
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned)glyphIndex forCharacterRange:(NSRange)characterRange inTextContainer:(id)textContainer lineLimit:(unsigned)limit nextGlyphIndex:(unsigned *)index;	// 0x32524681
- (void)_drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point parameters:(NSDrawingParameters *)parameters;	// 0x3252d2e1
- (void)_drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x3252dba9
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders;	// 0x32532391
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders flipped:(BOOL)flipped;	// 0x32531ec1
- (void)_drawLineForGlyphRange:(NSRange)glyphRange type:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x325323f1
- (BOOL)_drawsUnderlinesLikeWebKit;	// 0x32531961
- (NSRange)_extendedCharRangeForInvalidation:(NSRange)invalidation editedCharRange:(NSRange)range;	// 0x32523a29
- (void)_fillGlyphHoleAtIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x32524271
- (void)_fillGlyphHoleForCharacterRange:(NSRange)characterRange startGlyphIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x32524305
- (void)_fillLayoutHoleAtIndex:(unsigned)index desiredNumberOfLines:(unsigned)lines;	// 0x32525f89
- (void)_fillLayoutHoleForCharacterRange:(NSRange)characterRange desiredNumberOfLines:(unsigned)lines isSoft:(BOOL)soft;	// 0x325247a9
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer hintGlyphRange:(NSRange)range okToFillHoles:(BOOL)fillHoles;	// 0x3252a705
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x3252ad6d
- (void)_firstTextViewChanged;	// 0x3252d2dd
- (void)_fixSelectionAfterChangeInCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x32527d75
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;	// 0x325376a9
- (unsigned)_glyphAtIndex:(unsigned)index characterIndex:(unsigned *)index2 glyphInscription:(unsigned *)inscription isValidIndex:(BOOL *)index4;	// 0x3252fb25
- (id)_glyphDescription;	// 0x32526cf9
- (id)_glyphDescriptionForGlyphRange:(NSRange)glyphRange;	// 0x32526b11
- (id)_glyphGenerator;	// 0x3253609d
- (id)_glyphHoleDescription;	// 0x32526d2d
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x325262a5
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x325262c9
- (id)_glyphLocationDescription;	// 0x32526afd
- (NSRange)_glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer fast:(BOOL)fast okToFillHoles:(BOOL)fillHoles;	// 0x3252b421
- (NSRange)_glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range okToFillHoles:(BOOL)fillHoles;	// 0x325262f1
- (id)_glyphTreeDescription;	// 0x32527119
- (void)_growCachedRectArrayToSize:(unsigned)size;	// 0x32527d79
- (BOOL)_hasSeenRightToLeft;	// 0x32530155
- (unsigned)_indexOfFirstGlyphInTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x3252c02d
- (void)_insertGlyphs:(unsigned *)glyphs elasticAttributes:(BOOL *)attributes count:(unsigned)count atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x3252fd19
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned)index;	// 0x32530751
- (void)_invalidateDisplayIfNeeded;	// 0x32527cf9
- (void)_invalidateGlyphsForCharacterRange:(NSRange)characterRange editedCharacterRange:(NSRange)range changeInLength:(int)length actualCharacterRange:(NSRange *)range4;	// 0x32537209
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length;	// 0x3252caf9
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length includeBlocks:(BOOL)blocks;	// 0x3252c69d
- (void)_invalidateInsertionPoint;	// 0x32527cc9
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft;	// 0x3252d2b9
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft invalidateUsage:(BOOL)usage;	// 0x3252cb1d
- (void)_invalidateUsageForTextContainersInRange:(NSRange)range;	// 0x32527601
- (BOOL)_isInUILayoutMode;	// 0x3253010d
- (id)_layoutHoleDescription;	// 0x32526f2d
- (id)_layoutTreeDescription;	// 0x3252711d
- (id)_lineFragmentDescription;	// 0x32526ae9
- (id)_lineFragmentDescription:(BOOL)description;	// 0x32526aa5
- (id)_lineFragmentDescriptionForGlyphRange:(NSRange)glyphRange includeGlyphLocations:(BOOL)locations;	// 0x325267cd
- (void)_lineGlyphRange:(NSRange)range type:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x32533ddd
- (void)_markSelfAsDirtyForBackgroundLayout:(id)backgroundLayout;	// 0x32526425
- (void)_mergeGlyphHoles;	// 0x32523229
- (void)_mergeLayoutHoles;	// 0x3252322d
- (BOOL)_needToFlushGlyph;	// 0x3252fbb1
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned)index;	// 0x325247a1
- (char *)_packedGlyphs:(unsigned)glyphs range:(NSRange)range length:(unsigned *)length;	// 0x3252dac9
- (NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)glyphRange;	// 0x3252633d
- (void)_primitiveDeleteGlyphsInRange:(NSRange)range;	// 0x32537d9d
- (NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)characterRange;	// 0x325263a1
- (void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x325374a9
- (void)_promoteGlyphStoreToFormat:(unsigned)format;	// 0x3252fd79
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned)index;	// 0x32527655
- (CGRect *)_rectArrayForRange:(NSRange)range withinSelectionRange:(NSRange)range2 rangeIsCharRange:(BOOL)range3 singleRectOnly:(BOOL)only fullLineRectsOnly:(BOOL)only5 inTextContainer:(id)textContainer rectCount:(unsigned *)count rangeWithinContainer:(NSRange *)container glyphsDrawOutsideLines:(BOOL *)lines;	// 0x32527dcd
- (void)_resizeTextViewForTextContainer:(id)textContainer;	// 0x32527d6d
- (float)_rotationForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3252fa45
- (id)_rowArrayCache;	// 0x325239a5
- (id)_selectedRanges;	// 0x32527d71
- (id)_selectionRangesForInsertionPointRange:(NSRange)insertionPointRange;	// 0x325318d9
- (void)_setAlwaysDrawsActive:(BOOL)active;	// 0x32530331
- (void)_setCurrentAttachmentRect:(CGRect)rect index:(unsigned)index;	// 0x3252fddd
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)kit;	// 0x325318dd
- (void)_setGlyphGenerator:(id)generator;	// 0x32536195
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate integerOffsetPerLineEstimate:(unsigned)estimate2;	// 0x32536df1
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate offsetPerLineEstimate:(float)estimate2;	// 0x32536d8d
- (void)_setHasSeenRightToLeft:(BOOL)left;	// 0x32530131
- (void)_setIsInUILayoutMode:(BOOL)uilayoutMode;	// 0x325300e9
- (void)_setNeedToFlushGlyph:(BOOL)flushGlyph;	// 0x3252fbc9
- (void)_setRotation:(float)rotation forGlyphAtIndex:(unsigned)index;	// 0x3252fa0d
- (void)_setRowArrayCache:(id)cache;	// 0x325239c9
- (void)_showStyledCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context options:(id)options lineHeight:(float)height;	// 0x32531b15
- (void)_simpleDeleteGlyphsInRange:(NSRange)range;	// 0x3252fc85
- (void)_simpleInsertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index elastic:(BOOL)elastic;	// 0x3252fbed
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x32526281
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x32526035
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x3253c855
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3253c969
- (id)_temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x3253ca95
- (void)_updateUsageForTextContainer:(id)textContainer addingUsedRect:(CGRect)rect;	// 0x325273b5
- (NSStoredContainerUsage *)_validatedStoredUsageForTextContainerAtIndex:(unsigned)index;	// 0x32527c75
- (void)addTemporaryAttribute:(id)attribute value:(id)value forCharacterRange:(NSRange)characterRange;	// 0x3253c431
- (void)addTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x3253c219
- (void)addTextContainer:(id)container;	// 0x32536515
// converted property getter: - (BOOL)allowsNonContiguousLayout;	// 0x32536d79
- (CGSize)attachmentSizeForGlyphAtIndex:(unsigned)index;	// 0x32539425
- (id)attributedString;	// 0x325357f5
// converted property getter: - (BOOL)backgroundLayoutEnabled;	// 0x32536ec9
- (float)baselineOffsetForGlyphAtIndex:(unsigned)index;	// 0x3253020d
- (CGRect)boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer;	// 0x3253a971
- (CGRect)boundsRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3253a411
- (CGRect)boundsRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x3253a23d
- (unsigned)characterIndexForGlyphAtIndex:(unsigned)index;	// 0x32537fc9
- (unsigned)characterIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceBetweenInsertionPoints:(float *)distanceBetweenInsertionPoints;	// 0x3253b9d1
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x3253a599
- (void)dealloc;	// 0x32534f21
- (float)defaultBaselineOffsetForFont:(id)font;	// 0x3253cb69
- (float)defaultLineHeightForFont:(id)font;	// 0x3253caf1
// converted property getter: - (id)delegate;	// 0x325362f1
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x32537dad
- (id)description;	// 0x325356a1
- (void)drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x32531a99
- (void)drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x32531af1
- (void)drawStrikethroughForGlyphRange:(NSRange)glyphRange strikethroughType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x32533d81
- (void)drawUnderlineForGlyphRange:(NSRange)glyphRange underlineType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x32533d25
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned)index;	// 0x32539409
- (void)encodeWithCoder:(id)coder;	// 0x325350b5
- (void)ensureGlyphsForCharacterRange:(NSRange)characterRange;	// 0x325378d9
- (void)ensureGlyphsForGlyphRange:(NSRange)glyphRange;	// 0x325378e1
- (void)ensureLayoutForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x32537c59
- (void)ensureLayoutForCharacterRange:(NSRange)characterRange;	// 0x325378e9
- (void)ensureLayoutForGlyphRange:(NSRange)glyphRange;	// 0x3253793d
- (void)ensureLayoutForTextContainer:(id)textContainer;	// 0x32537945
// converted property getter: - (CGRect)extraLineFragmentRect;	// 0x32538e71
- (id)extraLineFragmentTextContainer;	// 0x32538e95
// converted property getter: - (CGRect)extraLineFragmentUsedRect;	// 0x32538e85
- (void)fillBackgroundRectArray:(CGRect *)array count:(unsigned)count forCharacterRange:(NSRange)characterRange color:(id)color;	// 0x32531ac5
- (void)finalize;	// 0x32534de5
- (unsigned)firstUnlaidCharacterIndex;	// 0x325386b5
// converted property getter: - (unsigned)firstUnlaidGlyphIndex;	// 0x32538891
// converted property getter: - (BOOL)flipsIfNeeded;	// 0x3253016d
- (float)fractionOfDistanceThroughGlyphForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x3253b959
- (void)getFirstUnlaidCharacterIndex:(unsigned *)index glyphIndex:(unsigned *)index2;	// 0x325388a5
- (unsigned)getGlyphs:(unsigned *)glyphs range:(NSRange)range;	// 0x325380e1
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits;	// 0x32538069
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x325380a1
- (int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned)index inDisplayOrder:(BOOL)displayOrder positions:(float **)positions characterIndexes:(unsigned **)indexes count:(unsigned *)count alternatePositions:(float **)positions6 characterIndexes:(unsigned **)indexes7 count:(unsigned *)count8;	// 0x3253178d
- (unsigned)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned)index alternatePositions:(BOOL)positions inDisplayOrder:(BOOL)displayOrder positions:(float *)positions4 characterIndexes:(unsigned *)indexes;	// 0x3253bebd
- (unsigned)glyphAtIndex:(unsigned)index;	// 0x32537f29
- (unsigned)glyphAtIndex:(unsigned)index isValidIndex:(BOOL *)index2;	// 0x32537edd
// converted property getter: - (id)glyphGenerator;	// 0x32536065
- (unsigned)glyphIndexForCharacterAtIndex:(unsigned)index;	// 0x32538009
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x3253aa8d
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceThroughGlyph:(float *)distanceThroughGlyph;	// 0x3253b979
- (NSRange)glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x3253a9c5
- (NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)boundingRectWithoutAdditionalLayout inTextContainer:(id)textContainer;	// 0x3253aa21
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x3253a509
- (NSRange)glyphRangeForTextContainer:(id)textContainer;	// 0x3253a629
- (BOOL)hasNonContiguousLayout;	// 0x32536e0d
// converted property getter: - (float)hyphenationFactor;	// 0x32537189
// converted property getter: - (BOOL)ignoresAntialiasThreshold;	// 0x32530301
// converted property getter: - (BOOL)ignoresViewTransformations;	// 0x32530231
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x32537d49
- (void)insertGlyphs:(const unsigned *)glyphs length:(unsigned)length forStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index4;	// 0x32537d15
- (void)insertTextContainer:(id)container atIndex:(unsigned)index;	// 0x32536555
- (int)intAttribute:(int)attribute forGlyphAtIndex:(unsigned)index;	// 0x32538049
- (void)invalidateDisplayForCharacterRange:(NSRange)characterRange;	// 0x325374ad
- (void)invalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x32537661
- (void)invalidateGlyphsForCharacterRange:(NSRange)characterRange changeInLength:(int)length actualCharacterRange:(NSRange *)range;	// 0x3253739d
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)glyphRange;	// 0x32537e65
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x325373c5
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange isSoft:(BOOL)soft actualCharacterRange:(NSRange *)range;	// 0x32537435
- (BOOL)isValidGlyphIndex:(unsigned)index;	// 0x32537fa9
- (unsigned)layoutOptions;	// 0x325371ed
- (CGRect)layoutRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3253a315
- (CGRect)layoutRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x3253a02d
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x32538db1
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x32538d79
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x32538e4d
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range allowLayout:(BOOL)layout;	// 0x32538e0d
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x32538dd5
- (CGPoint)locationForGlyphAtIndex:(unsigned)index;	// 0x32538ea5
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned)index;	// 0x325393ed
- (unsigned)numberOfGlyphs;	// 0x32537e7d
- (NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned)nominallySpacedGlyphsContainingIndex;	// 0x3253a859
- (CGRect *)rectArrayForCharacterRange:(NSRange)characterRange withinSelectedCharacterRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x3253a8e9
- (CGRect *)rectArrayForGlyphRange:(NSRange)glyphRange withinSelectedGlyphRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x3253a92d
- (void)removeTemporaryAttribute:(id)attribute forCharacterRange:(NSRange)characterRange;	// 0x3253c67d
- (void)removeTextContainerAtIndex:(unsigned)index;	// 0x32536845
- (void)replaceGlyphAtIndex:(unsigned)index withGlyph:(unsigned)glyph;	// 0x32537d71
- (void)replaceTextStorage:(id)storage;	// 0x32535ed9
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3252da35
// converted property setter: - (void)setAllowsNonContiguousLayout:(BOOL)layout;	// 0x32536cc5
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x3253869d
// converted property setter: - (void)setBackgroundLayoutEnabled:(BOOL)enabled;	// 0x32536e65
- (void)setBaselineOffset:(float)offset forGlyphAtIndex:(unsigned)index;	// 0x32530229
- (void)setBoundsRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x32539e75
- (void)setCharacterIndex:(unsigned)index forGlyphAtIndex:(unsigned)index2;	// 0x32537df5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32536301
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphAtIndex:(unsigned)index;	// 0x32538661
- (void)setExtraLineFragmentRect:(CGRect)rect usedRect:(CGRect)rect2 textContainer:(id)container;	// 0x325383a1
// converted property setter: - (void)setFlipsIfNeeded:(BOOL)needed;	// 0x32530185
// converted property setter: - (void)setGlyphGenerator:(id)generator;	// 0x325360ad
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x325370ed
// converted property setter: - (void)setIgnoresAntialiasThreshold:(BOOL)threshold;	// 0x32530305
// converted property setter: - (void)setIgnoresViewTransformations:(BOOL)transformations;	// 0x32530249
- (void)setIntAttribute:(int)attribute value:(int)value forGlyphAtIndex:(unsigned)index;	// 0x32537e21
- (void)setLayoutRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x32539a45
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3;	// 0x32538201
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x325301a9
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange;	// 0x3253858d
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange coalesceRuns:(BOOL)runs;	// 0x32538529
- (void)setLocations:(CGPoint *)locations startingGlyphIndexes:(unsigned *)indexes count:(unsigned)count forGlyphRange:(NSRange)glyphRange;	// 0x325385f1
- (void)setNotShownAttribute:(BOOL)attribute forGlyphAtIndex:(unsigned)index;	// 0x32538659
// converted property setter: - (void)setShowsControlCharacters:(BOOL)characters;	// 0x32537041
// converted property setter: - (void)setShowsInvisibleCharacters:(BOOL)characters;	// 0x32536f95
- (void)setTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x3253c061
- (void)setTextContainer:(id)container forGlyphRange:(NSRange)glyphRange;	// 0x32538111
// converted property setter: - (void)setTextStorage:(id)storage;	// 0x32535805
// converted property setter: - (void)setTypesetter:(id)typesetter;	// 0x325361fd
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x325371a9
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x3253cbad
// converted property setter: - (void)setUsesScreenFonts:(BOOL)fonts;	// 0x32536ef1
- (void)showAttachmentCell:(id)cell inRect:(CGRect)rect characterIndex:(unsigned)index;	// 0x32531e75
- (void)showCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context;	// 0x32531cc5
// converted property getter: - (BOOL)showsControlCharacters;	// 0x325370d9
// converted property getter: - (BOOL)showsInvisibleCharacters;	// 0x3253702d
- (void)strikethroughGlyphRange:(NSRange)range strikethroughType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x32534389
- (id)substituteFontForFont:(id)font;	// 0x3253cab9
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x3253c821
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3253c865
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x3253bf49
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x3253c99d
- (void)textContainerChangedGeometry:(id)geometry;	// 0x32536b69
- (void)textContainerChangedTextView:(id)view;	// 0x32536c95
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x32538af5
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x325388e1
// converted property getter: - (id)textContainers;	// 0x325363d9
// converted property getter: - (id)textStorage;	// 0x325357e5
- (void)textStorage:(id)storage edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length invalidatedRange:(NSRange)range5;	// 0x325376ad
// converted property getter: - (id)typesetter;	// 0x325361a5
// converted property getter: - (int)typesetterBehavior;	// 0x325371cd
- (void)underlineGlyphRange:(NSRange)range underlineType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x325343d9
- (CGRect)usedRectForTextContainer:(id)textContainer;	// 0x32538ced
// converted property getter: - (BOOL)usesFontLeading;	// 0x3253cb95
// converted property getter: - (BOOL)usesScreenFonts;	// 0x32536edd
@end

