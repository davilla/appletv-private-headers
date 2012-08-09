/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, ASAsset, NSURL, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryWrapper : NSObject {
	DCSDictionaryRef dictionary;	// 4 = 0x4
	NSURL *fileURL;	// 8 = 0x8
	NSString *indexLanguage;	// 12 = 0xc
	NSString *definitionLanguage;	// 16 = 0x10
	int type;	// 20 = 0x14
	ASAsset *asset;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) ASAsset *asset;	// G=0x305b0ba5; @synthesize
@property(readonly, assign, nonatomic) NSArray *countryCodes;	// G=0x305b04e5; 
@property(readonly, assign, nonatomic) NSString *definitionLanguage;	// G=0x305b0b85; @synthesize
@property(readonly, assign, nonatomic) unsigned definitionLanguageDirection;	// G=0x305b0565; 
@property(readonly, assign, nonatomic) DCSDictionaryRef dictionary;	// G=0x305b0b55; @synthesize
@property(readonly, assign, nonatomic) NSString *dictionaryPackageName;	// G=0x305b04a5; 
@property(readonly, assign, nonatomic) NSURL *fileURL;	// G=0x305b0b65; @synthesize
@property(readonly, assign, nonatomic) NSString *indexLanguage;	// G=0x305b0b75; @synthesize
@property(readonly, assign, nonatomic) int type;	// G=0x305b0b95; @synthesize
+ (id)_availableDictionaryAssets;	// 0x305afff1
+ (id)_wrappersWithAsset:(id)asset;	// 0x305b0089
- (id)initWithAsset:(id)asset indexLanguage:(id)language;	// 0x305b0149
- (BOOL)_correspondsToCurrentLocale;	// 0x305b0705
- (BOOL)_isBilingual;	// 0x305b06ad
// declared property getter: - (id)asset;	// 0x305b0ba5
- (int)compareToDictionary:(id)dictionary;	// 0x305b0a41
// declared property getter: - (id)countryCodes;	// 0x305b04e5
- (void)dealloc;	// 0x305b0405
// declared property getter: - (id)definitionLanguage;	// 0x305b0b85
// declared property getter: - (unsigned)definitionLanguageDirection;	// 0x305b0565
- (id)description;	// 0x305b09a9
// declared property getter: - (DCSDictionaryRef)dictionary;	// 0x305b0b55
// declared property getter: - (id)dictionaryPackageName;	// 0x305b04a5
// declared property getter: - (id)fileURL;	// 0x305b0b65
- (BOOL)hasMarkupForString:(id)string;	// 0x305b05a1
- (unsigned)hash;	// 0x305b0861
// declared property getter: - (id)indexLanguage;	// 0x305b0b75
- (BOOL)isEqual:(id)equal;	// 0x305b08bd
- (id)languageCode;	// 0x305b0525
- (id)markupForString:(id)string;	// 0x305b061d
// declared property getter: - (int)type;	// 0x305b0b95
@end
