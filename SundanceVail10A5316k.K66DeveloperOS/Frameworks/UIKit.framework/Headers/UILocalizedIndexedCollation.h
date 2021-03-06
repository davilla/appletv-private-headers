/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSLocale;

@interface UILocalizedIndexedCollation : NSObject {
@private
	NSLocale *_locale;	// 4 = 0x4
	NSArray *_sectionTitles;	// 8 = 0x8
	NSArray *_sectionStartStrings;	// 12 = 0xc
	NSArray *_sectionIndexTitles;	// 16 = 0x10
	NSArray *_sectionIndexMapping;	// 20 = 0x14
	NSString *_transform;	// 24 = 0x18
	NSString *_firstSectionStartString;	// 28 = 0x1c
	NSString *_lastSectionStartString;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x3033790d; 
@property(readonly, assign, nonatomic) NSArray *sectionTitles;	// G=0x303378fd; 
+ (id)collationWithDictionary:(id)dictionary;	// 0x303373c5
+ (id)currentCollation;	// 0x3033776d
- (id)initWithDictionary:(id)dictionary;	// 0x30337401
- (void)dealloc;	// 0x30337821
- (int)sectionForObject:(id)object collationStringSelector:(SEL)selector;	// 0x30337971
- (int)sectionForSectionIndexTitleAtIndex:(int)index;	// 0x30337931
// declared property getter: - (id)sectionIndexTitles;	// 0x3033790d
// declared property getter: - (id)sectionTitles;	// 0x303378fd
- (id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;	// 0x30337a9d
- (id)transformedCollationStringForString:(id)string;	// 0x30337631
@end

