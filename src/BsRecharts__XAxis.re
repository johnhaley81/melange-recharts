/* http://recharts.org/en-US/api/XAxis */
open BsRecharts__Utils;

[@bs.module "recharts"] external reactClass : ReasonReact.reactClass = "XAxis";

[@bs.obj]
external makeProps :
  (
    ~_type: [@bs.string] [ | `number | `category]=?,
    ~allowDataOverflow: bool=?,
    ~allowDecimals: bool=?,
    ~allowDuplicatedCategory: bool=?,
    ~axisLine: 'axisLine=?,
    ~dataKey: string=?,
    ~domain: array('domain)=?,
    ~height: int=?,
    ~hide: bool=?,
    ~interval: AxisInterval.t=?,
    ~label: StrOrNode.t=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~name: string=?,
    ~onClick: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseDown: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOut: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOver: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseUp: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~orientation: [@bs.string] [ | `bottom | `top]=?,
    ~padding: paddingHorizontal=?,
    ~reversed: bool=?,
    ~scale: [@bs.string] [
              | `auto
              | `linear
              | `pow
              | `sqrt
              | `log
              | `identity
              | `time
              | `band
              | `point
              | `ordinal
              | `quantile
              | `quantize
              | `utcTime
              | `sequential
              | `threshold
            ]
              =?,
    ~tick: 'tick=?,
    ~tickCount: int=?,
    ~tickFormatter: 'tickFormatter=?,
    ~tickLine: 'tickLine=?,
    ~tickMargin: int=?,
    ~ticks: array('ticks)=?,
    ~tickSize: int=?,
    ~unit: string=?,
    ~width: int=?,
    ~xAxisId: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~_type=?,
      ~allowDataOverflow=?,
      ~allowDecimals=?,
      ~allowDuplicatedCategory=?,
      ~axisLine=?,
      ~dataKey=?,
      ~domain=?,
      ~height=?,
      ~hide=?,
      ~interval=?,
      ~label=?,
      ~minTickGap=?,
      ~mirror=?,
      ~name=?,
      ~onClick=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOut=?,
      ~onMouseOver=?,
      ~onMouseUp=?,
      ~orientation=?,
      ~padding=?,
      ~reversed=?,
      ~scale=?,
      ~tick=?,
      ~tickCount=?,
      ~tickFormatter=?,
      ~tickLine=?,
      ~tickMargin=?,
      ~ticks=?,
      ~tickSize=?,
      ~unit=?,
      ~width=?,
      ~xAxisId=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~_type?,
        ~allowDataOverflow?,
        ~allowDecimals?,
        ~allowDuplicatedCategory?,
        ~axisLine?,
        ~dataKey?,
        ~domain?,
        ~height?,
        ~hide?,
        ~interval=?interval |> AxisInterval.encodeOpt,
        ~label=?label |> StrOrNode.encodeOpt,
        ~minTickGap?,
        ~mirror?,
        ~name?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~orientation?,
        ~padding?,
        ~reversed?,
        ~scale?,
        ~tick?,
        ~tickCount?,
        ~tickFormatter?,
        ~tickLine?,
        ~tickMargin?,
        ~ticks?,
        ~tickSize?,
        ~unit?,
        ~width?,
        ~xAxisId?,
        (),
      ),
    children,
  );
