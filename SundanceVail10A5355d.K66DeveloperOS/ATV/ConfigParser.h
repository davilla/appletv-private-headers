/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BuiltinConfig, NSDictionary;
@protocol NetflixConfigProtocol, NSObject;

@interface ConfigParser : XXUnknownSuperclass {
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
@property(retain) BuiltinConfig *builtinConfig;	// G=0x459759; S=0x45976d; @synthesize=builtinConfig_
@property(retain) NSDictionary *builtinConfigParsableItems;	// G=0x459791; S=0x4597a5; @synthesize=builtinConfigParsableItems_
@property(assign) char **currentTag;	// G=0x45972d; S=0x459741; @synthesize=currentTag_
@property(retain) id<NSObject, NetflixConfigProtocol> customNetflixConfig;	// G=0x4597f5; S=0x459809; @synthesize=customNetflixConfig_
@property(assign) Class customNetflixConfigClass;	// G=0x4597c9; S=0x4597dd; @synthesize=customNetflixConfigClass_
@property(retain) NSDictionary *customNetflixConfigParsableItems;	// G=0x45982d; S=0x459841; @synthesize=customNetflixConfigParsableItems_
@property(assign) XML_ParserStructRef parser;	// G=0x4596a9; S=0x4596bd; @synthesize=parser_
@property(assign) int parserDepth;	// G=0x4596d5; S=0x4596e9; @synthesize=parserDepth_
@property(assign) int tagListDepth;	// G=0x459701; S=0x459715; @synthesize=tagListDepth_
- (id)init;	// 0x458a81
- (id)initWithCustomNetflixConfigClass:(Class)customNetflixConfigClass;	// 0x458a95
// declared property getter: - (id)builtinConfig;	// 0x459759
// declared property getter: - (id)builtinConfigParsableItems;	// 0x459791
- (void)charData:(const char *)data withLength:(int)length;	// 0x459119
// declared property getter: - (char **)currentTag;	// 0x45972d
// declared property getter: - (id)customNetflixConfig;	// 0x4597f5
// declared property getter: - (Class)customNetflixConfigClass;	// 0x4597c9
// declared property getter: - (id)customNetflixConfigParsableItems;	// 0x45982d
- (void)dealloc;	// 0x458b89
- (void)dumpTags;	// 0x458e05
- (void)endElement:(const char *)element;	// 0x459059
- (bool)parse:(id)parse;	// 0x458cad
// declared property getter: - (XML_ParserStructRef)parser;	// 0x4596a9
// declared property getter: - (int)parserDepth;	// 0x4596d5
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x45976d
// declared property setter: - (void)setBuiltinConfigParsableItems:(id)items;	// 0x4597a5
// declared property setter: - (void)setCurrentTag:(char **)tag;	// 0x459741
// declared property setter: - (void)setCustomNetflixConfig:(id)config;	// 0x459809
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x4597dd
// declared property setter: - (void)setCustomNetflixConfigParsableItems:(id)items;	// 0x459841
// declared property setter: - (void)setParser:(XML_ParserStructRef)parser;	// 0x4596bd
// declared property setter: - (void)setParserDepth:(int)depth;	// 0x4596e9
// declared property setter: - (void)setTagListDepth:(int)depth;	// 0x459715
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x458e39
// declared property getter: - (int)tagListDepth;	// 0x459701
- (id)textToObject:(char *)object cls:(Class)cls;	// 0x4594e1
@end
