[block_scheme_blocks_only.drawio](https://github.com/user-attachments/files/33507703/block_scheme_blocks_only.drawio)
<mxfile host="app.diagrams.net">
  <diagram id="full" name="Блок-схема">
    <mxGraphModel dx="900" dy="900" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0"/>
        <mxCell id="1" parent="0"/>
        <mxCell id="b1" value="Начало" style="rounded=1;arcSize=50;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="280" y="20" width="240" height="40" as="geometry"/></mxCell>
        <mxCell id="b2" value="setlocale(LC_ALL, &quot;Russian&quot;)" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="280" y="100" width="240" height="50" as="geometry"/></mxCell>
        <mxCell id="b3" value="Вывод: «Введите X:»" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="280" y="190" width="240" height="50" as="geometry"/></mxCell>
        <mxCell id="b4" value="Ввод X" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="280" y="280" width="240" height="50" as="geometry"/></mxCell>
        <mxCell id="b5" value="X &lt; 140?" style="rhombus;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="310" y="370" width="180" height="80" as="geometry"/></mxCell>
        <mxCell id="b6" value="Q = (X−140)²/18 + 8" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="60" y="385" width="200" height="50" as="geometry"/></mxCell>
        <mxCell id="b7" value="X ≤ 180?" style="rhombus;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="310" y="500" width="180" height="80" as="geometry"/></mxCell>
        <mxCell id="b8" value="Q = 2·√(X−160+20) + 42" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="60" y="515" width="200" height="50" as="geometry"/></mxCell>
        <mxCell id="b9" value="Q = 3·(X−180) + 60" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="295" y="630" width="210" height="50" as="geometry"/></mxCell>
        <mxCell id="b10" value="Вывод X, Q" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="280" y="720" width="240" height="50" as="geometry"/></mxCell>
        <mxCell id="b11" value="Конец" style="rounded=1;arcSize=50;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#000000;fontFamily=Times New Roman;fontSize=14;" vertex="1" parent="1"><mxGeometry x="280" y="810" width="240" height="40" as="geometry"/></mxCell>

        <mxCell id="e1" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;" edge="1" parent="1" source="b1" target="b2"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e2" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;" edge="1" parent="1" source="b2" target="b3"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e3" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;" edge="1" parent="1" source="b3" target="b4"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e4" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;" edge="1" parent="1" source="b4" target="b5"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e5" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;verticalAlign=bottom;fontFamily=Times New Roman;fontSize=12;" edge="1" parent="1" source="b5" target="b6"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e6" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;align=left;fontFamily=Times New Roman;fontSize=12;" edge="1" parent="1" source="b5" target="b7"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e7" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;verticalAlign=bottom;fontFamily=Times New Roman;fontSize=12;" edge="1" parent="1" source="b7" target="b8"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e8" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;align=left;fontFamily=Times New Roman;fontSize=12;" edge="1" parent="1" source="b7" target="b9"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e9" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;" edge="1" parent="1" source="b9" target="b10"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="e10" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="b6" target="b10"><mxGeometry relative="1" as="geometry"><Array as="points"><mxPoint x="30" y="410"/><mxPoint x="30" y="745"/></Array></mxGeometry></mxCell>
        <mxCell id="e11" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=none;strokeColor=#000000;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="b8"><mxGeometry relative="1" as="geometry"><mxPoint x="30" y="540" as="targetPoint"/></mxGeometry></mxCell>
        <mxCell id="e12" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;endArrow=block;endFill=1;strokeColor=#000000;" edge="1" parent="1" source="b10" target="b11"><mxGeometry relative="1" as="geometry"/></mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
