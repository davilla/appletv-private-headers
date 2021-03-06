/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacParserDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_entries;	// 12 = 0xc
	BOOL _entryCreated;	// 16 = 0x10
	int _curIndex;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *entries;	// G=0x32f453b1; converted property
+ (id)delegate;	// 0x32f45239
- (id)init;	// 0x32f45271
- (void)__atv_end_entry;	// 0x32f4538d
- (void)__atv_start_entry:(id)entry;	// 0x32f45339
- (id)_selectorForElement:(id)element qName:(id)name end:(BOOL)end;	// 0x32f455cd
- (void)dealloc;	// 0x32f452e9
- (id)endSelectors;	// 0x32f455c9
// converted property getter: - (id)entries;	// 0x32f453b1
- (id)modDate;	// 0x32f45335
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x32f4550d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x32f45445
- (void)setEntryObject:(id)object forKey:(id)key;	// 0x32f453dd
- (id)startSelectors;	// 0x32f455c5
@end

