/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EDFormula : NSObject {
@private
	CFDataRef mPackedData;	// 4 = 0x4
}
@property(assign, getter=isCleaned) bool cleaned;	// G=0x32b00e7d; S=0x32b0824d; converted property
@property(retain) id originalFormulaString;	// G=0x32cf1b39; S=0x32cf1f05; converted property
@property(retain) id warningParameter;	// G=0x32cf1b7d; S=0x32cf1e71; converted property
+ (id)formula;	// 0x32afeb8d
+ (id)messageForWarning:(int)warning;	// 0x32cf16cd
- (id)init;	// 0x32afebcd
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;	// 0x32cf1885
- (bool)addToken:(int)token extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x32b00939
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x32cf1dd5
- (bool)copyTokenAtIndex:(unsigned)index fromFormula:(id)formula;	// 0x32cf1a49
- (bool)copyTokenFromXlPtg:(XlPtg *)xlPtg;	// 0x32b0085d
- (void)dealloc;	// 0x32b13b09
- (char *)extendedDataForTokenAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned *)length;	// 0x32cf18e5
- (bool)isBaseFormula;	// 0x32cf16d5
// converted property getter: - (bool)isCleaned;	// 0x32b00e7d
- (bool)isCleanedWithEvaluationStack;	// 0x32cf1815
- (bool)isContainsRelativeReferences;	// 0x32cf183d
- (bool)isSharedFormula;	// 0x32cf16d1
- (bool)isSupportedFormula;	// 0x32b00e55
- (char *)lastExtendedDataForTokenAtIndex:(unsigned)index length:(unsigned *)length;	// 0x32b07ebd
// converted property getter: - (id)originalFormulaString;	// 0x32cf1b39
- (void)populateXlPtg:(XlPtg *)ptg index:(unsigned)index;	// 0x32cf1d5d
- (void)removeAllTokens;	// 0x32c3925d
- (bool)removeTokenAtIndex:(unsigned)index;	// 0x32cf1fa1
- (bool)replaceTokenAtIndex:(unsigned)index withFormula:(id)formula formulaTokenIndex:(unsigned)index3;	// 0x32cf1961
- (void)replaceTokenTypeAtIndex:(unsigned)index withType:(int)type;	// 0x32cf17c9
// converted property setter: - (void)setCleaned:(bool)cleaned;	// 0x32b0824d
- (char *)setExtendedDataAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned)length;	// 0x32b00b8d
// converted property setter: - (void)setOriginalFormulaString:(id)string;	// 0x32cf1f05
- (void)setWarning:(int)warning;	// 0x32c797ad
// converted property setter: - (void)setWarningParameter:(id)parameter;	// 0x32cf1e71
- (void)setupExtendedDataForTokenAtIndex:(unsigned)index extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x32b00aa1
- (bool)setupTokensWithTokensCount:(unsigned)tokensCount tokensWithDataCount:(unsigned)dataCount extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x32afec15
- (EDToken *)tokenAtIndex:(unsigned)index;	// 0x32b00cfd
- (unsigned)tokenCount;	// 0x32b07b3d
- (int)tokenTypeAtIndex:(unsigned)index;	// 0x32b07e15
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x32cf1e0d
- (void)updateCleanedWithEvaluationStack:(bool)evaluationStack;	// 0x32cf17e5
- (void)updateContainsRelativeReferences:(bool)references;	// 0x32b08111
- (id)warning;	// 0x32cf1799
// converted property getter: - (id)warningParameter;	// 0x32cf1b7d
- (int)warningType;	// 0x32cf1865
- (ChVector<XlPtg*> *)xlPtgs;	// 0x32cf1bc9
@end
