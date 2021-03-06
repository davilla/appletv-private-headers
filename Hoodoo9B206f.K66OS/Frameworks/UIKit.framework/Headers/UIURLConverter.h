/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface UIURLConverter : NSObject {
@private
	NSArray *_hostPatterns;	// 4 = 0x4
	NSArray *_hostSuffixWhiteList;	// 8 = 0x8
	NSArray *_pathPatterns;	// 12 = 0xc
	NSDictionary *_schemeMapping;	// 16 = 0x10
}
- (id)initWithURLConverterDictionary:(id)urlconverterDictionary;	// 0x35452779
- (BOOL)_URLMatchesHostSuffixWhiteList:(id)list;	// 0x35452a11
- (BOOL)_URLMatchesPatterns:(id)patterns;	// 0x35457645
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x35457715
- (id)convertedURLForURL:(id)url;	// 0x35452915
- (void)dealloc;	// 0x355315a9
- (void)setHostPatternStrings:(id)strings;	// 0x35531631
- (void)setHostSuffixWhiteList:(id)list;	// 0x35531665
- (void)setPathPatternStrings:(id)strings;	// 0x355316a9
- (void)setSchemeMapping:(id)mapping;	// 0x355316dd
@end

