/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIHTTPRequest.h>

@class NSURL, RUIParser;

@interface RUILoader : RUIHTTPRequest
{
    RUIParser *_parser;
    NSURL *_url;
}

- (void)cancel;
- (void)loadXMLUIWithURL:(id)arg1;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (id)URL;
- (void)parseData:(id)arg1;
- (void)_finishLoad;
- (void)didParseData;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)failWithError:(id)arg1;

@end

