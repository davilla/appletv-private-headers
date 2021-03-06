/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BuiltinConfig, NSDictionary;
@protocol NetflixConfigProtocol, NSObject;

__attribute__((visibility("hidden")))
@interface ConfigParser : NSObject {
@private
	XML_ParserStructRef parser_;	// 4 = 0x4
	int parserDepth_;	// 8 = 0x8
	int tagListDepth_;	// 12 = 0xc
	char **currentTag_;	// 16 = 0x10
	BuiltinConfig *builtinConfig_;	// 20 = 0x14
	NSDictionary *builtinConfigParsableItems_;	// 24 = 0x18
	Class customNetflixConfigClass_;	// 28 = 0x1c
	id<NSObject, NetflixConfigProtocol> customNetflixConfig_;	// 32 = 0x20
	NSDictionary *customNetflixConfigParsableItems_;	// 36 = 0x24
}
@property(retain) BuiltinConfig *builtinConfig;	// G=0x32c3a51d; S=0x32c3a531; @synthesize=builtinConfig_
@property(retain) NSDictionary *builtinConfigParsableItems;	// G=0x32c3a555; S=0x32c3a569; @synthesize=builtinConfigParsableItems_
@property(assign) char **currentTag;	// G=0x32c3a4fd; S=0x32c3a50d; @synthesize=currentTag_
@property(retain) id<NSObject, NetflixConfigProtocol> customNetflixConfig;	// G=0x32c3a5ad; S=0x32c3a5c1; @synthesize=customNetflixConfig_
@property(assign) Class customNetflixConfigClass;	// G=0x32c3a58d; S=0x32c3a59d; @synthesize=customNetflixConfigClass_
@property(retain) NSDictionary *customNetflixConfigParsableItems;	// G=0x32c3a5e5; S=0x32c3a5f9; @synthesize=customNetflixConfigParsableItems_
@property(assign) XML_ParserStructRef parser;	// G=0x32c3a49d; S=0x32c3a4ad; @synthesize=parser_
@property(assign) int parserDepth;	// G=0x32c3a4bd; S=0x32c3a4cd; @synthesize=parserDepth_
@property(assign) int tagListDepth;	// G=0x32c3a4dd; S=0x32c3a4ed; @synthesize=tagListDepth_
- (id)init;	// 0x32c39839
- (id)initWithCustomNetflixConfigClass:(Class)customNetflixConfigClass;	// 0x32c3984d
// declared property getter: - (id)builtinConfig;	// 0x32c3a51d
// declared property getter: - (id)builtinConfigParsableItems;	// 0x32c3a555
- (void)charData:(const char *)data withLength:(int)length;	// 0x32c39ee5
// declared property getter: - (char **)currentTag;	// 0x32c3a4fd
// declared property getter: - (id)customNetflixConfig;	// 0x32c3a5ad
// declared property getter: - (Class)customNetflixConfigClass;	// 0x32c3a58d
// declared property getter: - (id)customNetflixConfigParsableItems;	// 0x32c3a5e5
- (void)dealloc;	// 0x32c39945
- (void)dumpTags;	// 0x32c39bc5
- (void)endElement:(const char *)element;	// 0x32c39e25
- (bool)parse:(id)parse;	// 0x32c39a69
// declared property getter: - (XML_ParserStructRef)parser;	// 0x32c3a49d
// declared property getter: - (int)parserDepth;	// 0x32c3a4bd
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x32c3a531
// declared property setter: - (void)setBuiltinConfigParsableItems:(id)items;	// 0x32c3a569
// declared property setter: - (void)setCurrentTag:(char **)tag;	// 0x32c3a50d
// declared property setter: - (void)setCustomNetflixConfig:(id)config;	// 0x32c3a5c1
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x32c3a59d
// declared property setter: - (void)setCustomNetflixConfigParsableItems:(id)items;	// 0x32c3a5f9
// declared property setter: - (void)setParser:(XML_ParserStructRef)parser;	// 0x32c3a4ad
// declared property setter: - (void)setParserDepth:(int)depth;	// 0x32c3a4cd
// declared property setter: - (void)setTagListDepth:(int)depth;	// 0x32c3a4ed
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x32c39bf5
// declared property getter: - (int)tagListDepth;	// 0x32c3a4dd
- (id)textToObject:(char *)object cls:(Class)cls;	// 0x32c3a2c5
@end

