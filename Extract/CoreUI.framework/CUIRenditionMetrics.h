/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionMetrics : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct crmFlags { 
        unsigned int scalesVertically : 1; 
        unsigned int scalesHorizontally : 1; 
        unsigned int reserved : 14; 
    double _baseline;
    } _contentBottomLeftMargin;
    } _contentTopRightMargin;
    } _crmFlags;
    } _edgeBottomLeftMargin;
    } _edgeTopRightMargin;
    } _imageSize;
    double _scale;
}

- (double)baseline;
- (struct CGSize { double x1; double x2; })contentBottomLeftMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (struct CGSize { double x1; double x2; })contentTopRightMargin;
- (struct CGSize { double x1; double x2; })edgeBottomLeftMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })edgeRect;
- (struct CGSize { double x1; double x2; })edgeTopRightMargin;
- (bool)hasOpaqueContentBounds;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1 edgeBottomLeft:(struct CGSize { double x1; double x2; })arg2 edgeTopRight:(struct CGSize { double x1; double x2; })arg3 contentBottomLeft:(struct CGSize { double x1; double x2; })arg4 contentTopRight:(struct CGSize { double x1; double x2; })arg5 baseline:(double)arg6 scalesVertically:(bool)arg7 scalesHorizontally:(bool)arg8 scale:(double)arg9;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scale;
- (bool)scalesHorizontally;
- (bool)scalesVertically;

@end
