/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVHSQueryHelper : XXUnknownSuperclass {
}
+ (id)atvFilterWithProperty:(id)property query:(id)query;	// 0xdce49
+ (id)dmapStrForATVProperty:(id)atvproperty dpap:(BOOL)dpap;	// 0xdd031
+ (BOOL)isDPAPQuery:(id)query dataClient:(id)client;	// 0xdbc4d
+ (id)mediaKindForATVMediaType:(id)atvmediaType;	// 0xdc5e9
+ (id)mediaKindForPlaylistMediaType:(id)playlistMediaType;	// 0xdc729
+ (id)queryArgumentWithATVFilter:(id)atvfilter queryType:(int)type;	// 0xdc2a9
+ (id)queryArgumentWithProperty:(id)property operator:(int)anOperator value:(id)value;	// 0xdc481
+ (void)setMetaDataArgumentWithRequest:(id)request query:(id)query dpap:(BOOL)dpap;	// 0xdc7fd
+ (void)setQueryArgumentWithRequest:(id)request query:(id)query;	// 0xdbd39
+ (void)setRangeArgumentWithRequest:(id)request query:(id)query;	// 0xdcd7d
+ (void)setSortArgumentWithRequest:(id)request query:(id)query dpap:(BOOL)dpap;	// 0xdcb35
@end
