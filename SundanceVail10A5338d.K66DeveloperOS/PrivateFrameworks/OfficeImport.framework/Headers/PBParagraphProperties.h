/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PBParagraphProperties : NSObject {
}
+ (int)pptAlignmentTypeWithOADTextAlignType:(int)oadtextAlignType;	// 0x33bca0cd
+ (int)pptFontAlignWithOADTextFontAlign:(int)oadtextFontAlign;	// 0x33bca0f1
+ (short)pptTextSpacingWithOADParaSpacing:(id)oadparaSpacing defaultPptParaSpacing:(short)spacing;	// 0x33bca021
+ (void)readAlign:(id)align pptAlignmentType:(int)type;	// 0x33968de5
+ (void)readParagraphProperties:(id)properties paragraphProperty:(PptParaProperty *)property bulletStyle:(PptParaProperty9 *)style isMaster:(BOOL)master state:(id)state;	// 0x339684e5
+ (void)readParagraphProperties:(id)properties paragraphPropertyRun:(PptParaRun *)run bulletStyle:(PptParaProperty9 *)style state:(id)state;	// 0x339be2b9
+ (void)writeParagraphProperties:(id)properties paragraphProperties:(PptParaProperty *)properties2 bulletStyle:(PptParaProperty9 *)style state:(id)state;	// 0x33bc972d
+ (void)writeTabStopsFromParagraphProperties:(id)paragraphProperties toParagraphProperties:(PptParaProperty *)paragraphProperties2 state:(id)state;	// 0x33bc9f09
@end
