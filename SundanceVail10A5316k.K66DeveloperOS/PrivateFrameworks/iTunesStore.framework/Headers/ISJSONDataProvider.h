/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDataProvider.h"


@interface ISJSONDataProvider : ISDataProvider {
	unsigned _options;	// 44 = 0x2c
}
@property(assign) unsigned parserOptions;	// G=0x33540e7d; S=0x33540e91; @synthesize=_options
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x33540dd5
// declared property getter: - (unsigned)parserOptions;	// 0x33540e7d
// declared property setter: - (void)setParserOptions:(unsigned)options;	// 0x33540e91
@end
