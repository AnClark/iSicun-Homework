(function(i,C){function m(a){return typeof a==="number"}function n(a){return a!==D&&a!==null}var D,p,r,s=i.Chart,t=i.extend,z=i.each;r=["path","rect","circle"];p={top:0,left:0,center:0.5,middle:0.5,bottom:1,right:1};var u=C.inArray,A=i.merge,B=function(){this.init.apply(this,arguments)};B.prototype={init:function(a,d){var c=d.shape&&d.shape.type;this.chart=a;var b,f;f={xAxis:0,yAxis:0,title:{style:{},text:"",x:0,y:0},shape:{params:{stroke:"#000000",fill:"transparent",strokeWidth:2}}};b={circle:{params:{x:0,