/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"


@interface NSTypesetter : NSObject {
	void *_reserved;	// 4 = 0x4
}
@property(retain) id attributedString;	// G=0x3255d625; S=0x3255d5f5; converted property
@property(assign) BOOL bidiProcessingEnabled;	// G=0x3255d519; S=0x3255d549; converted property
@property(assign) float hyphenationFactor;	// G=0x3255d275; S=0x3255d2a1; converted property
@property(assign) float lineFragmentPadding;	// G=0x3255d2e1; S=0x3255d311; converted property
@property(assign) float tightenThresholdForTruncation;	// G=0x3255d589; S=0x3255d5b5; converted property
@property(assign) int typesetterBehavior;	// G=0x3255d20d; S=0x3255d23d; converted property
@property(assign) BOOL usesFontLeading;	// G=0x3255d19d; S=0x3255d1cd; converted property
+ (BOOL)_usesATSTypesetter;	// 0x3255c8bd
+ (int)defaultStringDrawingTypesetterBehavior;	// 0x3255c8e5
+ (int)defaultTypesetterBehavior;	// 0x3255c8d5
+ (void)initialize;	// 0x3255c6c1
+ (id)sharedSystemTypesetter;	// 0x3255c911
+ (id)sharedSystemTypesetterForBehavior:(int)behavior;	// 0x3255c8f5
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x3255c92d
- (BOOL)_allowsEllipsisGlyphSubstitution;	// 0x3255d11d
- (id)_ellipsisFontForFont:(id)font;	// 0x3255d139
- (BOOL)_forceOriginalFontBaseline;	// 0x3255ca79
- (XXStruct__MnFEB *)_getAuxData;	// 0x3255c94d
- (unsigned)_getRemainingNominalParagraphRange:(NSRange *)range andParagraphSeparatorRange:(NSRange *)range2 charactarIndex:(unsigned)index layoutManager:(id)manager string:(id)string;	// 0x3255cae9
- (void)_layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments maxCharacterIndex:(unsigned)index nextGlyphIndex:(unsigned *)index5 nextCharacterIndex:(unsigned *)index6;	// 0x3255e625
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x3255d115
- (void)_setForceOriginalFontBaseline:(BOOL)baseline;	// 0x3255caa9
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x3255d119
- (void)_updateParagraphStyleCache:(id)cache;	// 0x3255cf1d
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x3255e565
// converted property getter: - (id)attributedString;	// 0x3255d625
- (id)attributesForExtraLineFragment;	// 0x3255e519
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x32560881
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x3255d991
- (void)beginParagraph;	// 0x3255d87d
// converted property getter: - (BOOL)bidiProcessingEnabled;	// 0x3255d519
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x32560b69
- (id)currentParagraphStyle;	// 0x3255dc11
- (id)currentTextContainer;	// 0x3255dbe1
- (void)dealloc;	// 0x3255c9bd
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x32561c4d
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x3255da21
- (void)endParagraph;	// 0x3255d959
- (void)finalize;	// 0x3255ca31
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x32560cc9
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 forParagraphSeparatorGlyphRange:(NSRange)paragraphSeparatorGlyphRange atProposedOrigin:(CGPoint)proposedOrigin;	// 0x3255dc79
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 remainingRect:(CGRect *)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;	// 0x32560d19
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x32560c19
// converted property getter: - (float)hyphenationFactor;	// 0x3255d275
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x32561bd1
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x325607a5
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x32560749
- (id)layoutManager;	// 0x3255db81
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x3255d82d
// converted property getter: - (float)lineFragmentPadding;	// 0x3255d2e1
- (float)lineSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x3255da91
- (NSRange)paragraphCharacterRange;	// 0x3255d7bd
- (NSRange)paragraphGlyphRange;	// 0x3255d74d
- (NSRange)paragraphSeparatorCharacterRange;	// 0x3255d7f5
- (NSRange)paragraphSeparatorGlyphRange;	// 0x3255d785
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x3255db51
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x3255db11
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x32561e81
// converted property setter: - (void)setAttributedString:(id)string;	// 0x3255d5f5
- (void)setBidiLevels:(const char *)levels forGlyphRange:(NSRange)glyphRange;	// 0x32561ee1
// converted property setter: - (void)setBidiProcessingEnabled:(BOOL)enabled;	// 0x3255d549
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;	// 0x32561d59
- (void)setHardInvalidation:(BOOL)invalidation forGlyphRange:(NSRange)glyphRange;	// 0x3255dc41
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x3255d2a1
// converted property setter: - (void)setLineFragmentPadding:(float)padding;	// 0x3255d311
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x32561a91
- (void)setLocation:(CGPoint)location withAdvancements:(const float *)advancements forStartOfGlyphRange:(NSRange)glyphRange;	// 0x32561df5
- (void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;	// 0x32561cbd
- (void)setParagraphGlyphRange:(NSRange)range separatorGlyphRange:(NSRange)range2;	// 0x3255d655
// converted property setter: - (void)setTightenThresholdForTruncation:(float)truncation;	// 0x3255d5b5
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x3255d23d
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x3255d1cd
- (id)substituteFontForFont:(id)font;	// 0x3255d351
- (void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned *)glyphs;	// 0x32561b69
- (id)textContainers;	// 0x3255dbb1
- (id)textTabForGlyphLocation:(float)glyphLocation writingDirection:(int)direction maxLocation:(float)location;	// 0x3255d385
// converted property getter: - (float)tightenThresholdForTruncation;	// 0x3255d589
// converted property getter: - (int)typesetterBehavior;	// 0x3255d20d
// converted property getter: - (BOOL)usesFontLeading;	// 0x3255d19d
@end
